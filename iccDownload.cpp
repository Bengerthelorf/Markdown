#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <curl/curl.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

using namespace std;

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: ./download_file <URL>" << endl;
        return 1;
    }
    
    string url = argv[1];
    string base_url = url;
    if (url[url.size() - 1] != '/') {
        base_url += "/";
    }
    
    string file_name_template = base_url + "{}.png";
    
    int i = 1;
    while (true) {
        string file_url = file_name_template;
        string file_name = file_name_template;
        file_url.replace(file_url.find("{}"), 2, to_string(i));
        file_name.replace(file_name.find("{}"), 2, to_string(i));
        
        CURL *curl;
        FILE *fp;
        CURLcode res;
        curl = curl_easy_init();
        if (curl) {
            fp = fopen(file_name.c_str(),"wb");
            curl_easy_setopt(curl, CURLOPT_URL, file_url.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            fclose(fp);
        }
        
        if (res != 0) {
            break;
        }
        
        cout << "Downloaded " << file_name << endl;
        i++;
    }
    
    if (i == 2) {
        cout << "No files found." << endl;
    } else {
        cout << "Downloaded " << i - 1 << " files." << endl;
    }
    
    return 0;
}