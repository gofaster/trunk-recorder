#ifndef CALL_UPLOADER_H
#define CALL_UPLOADER_H

#include "uploader.h"
#include <vector>

class Call;


class System;

struct call_data_t {
        long thread_id;
        long talkgroup;
        double freq;
        long start_time;

        long stop_time;
        bool encrypted;
        bool emergency;
        bool audio_archive;
        char filename[255];
        char converted[255];
        char file_path[255];
        std::string upload_server;
        std::string server;
        std::string scheme;
        std::string hostname;
        std::string port;
        std::string path;
        std::string api_key;
        std::string short_name;
        int tdma_slot;
        int length;
        bool phase2_tdma;
        long source_count;
        std::vector<Call_Source> source_list;
        long freq_count;
        Call_Freq freq_list[50];
        long error_list_count;
        Call_Error error_list[50];
};

void send_call(Call *call, System *sys, Config config);


#endif
