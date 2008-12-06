// GeoIP filter function
// Copyright 2008 (C) Andrew Porokhin
//
// Contact: Andrew Porokhin <andrew.porokhin dog gmail dot com>
//     Saint-Petersburg, Russia

//typedef sigc::slot<uint32_t, const sockaddr*> slot_filter_type;

GeoIP *gi;

void initGeoIP() {
    gi = GeoIP_open("/opt/local/share/GeoIP/GeoIP.dat", GEOIP_STANDARD);
}

uint32_t filterGeoIP(const sockaddr* addr) {
    char* countryId = GeoIP_country_code_by_ipnum(gi, ((sockaddr_in*) addr).sin_addr.s_addr);
    // TODO: check for allowed countries list.
}