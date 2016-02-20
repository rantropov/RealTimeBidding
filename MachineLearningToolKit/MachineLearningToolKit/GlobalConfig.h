//
//  GlobalConfig.h
//  MachineLearningToolKit
//
//  Created by Charles on 2016-02-19.
//  Copyright © 2016 Charles. All rights reserved.
//

#ifndef GlobalConfig_h
#define GlobalConfig_h

namespace GlobalConfig {
    class SystemInfo {
    public:
        static const int16_t GetSystemBit() { return _system_bit; }
    private:
        static const int16_t _system_bit;
    };
    // Check windows
#if _WIN32 || _WIN64
#if _WIN64
#define SYSTEMBIT 64
    const GlobalConfig::SystemInfo::int16_t SystemInfo::_system_bit = 64;
#else
#define SYSTEMBIT 32
    const GlobalConfig::SystemInfo::int16_t _system_bit = 32;
#endif
#endif
    
    // Check GCC
#if __GNUC__
#if __x86_64__ || __ppc64__
#define SYSTEMBIT 64
    const int16_t GlobalConfig::SystemInfo::_system_bit = 64;
#else
#define SYSTEMBIT 32
    const int16_t GlobalConfig::SystemInfo::_system_bit = 32;
#endif
#endif
}



#endif /* GlobalConfig_h */
