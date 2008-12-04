// GeoIP filter function
// Copyright (C) Andrew Porohin
//
// Contact: Andrew Porohin <andrew.porokhin dog gmail dot com>
//     Saint-Petersburg, Russia

//typedef sigc::slot<uint32_t, const sockaddr*> slot_filter_type;

GeoIP *gi;

void initGeoIP() {
    gi = GeoIP_open("/opt/local/share/GeoIP/GeoIP.dat", GEOIP_STANDARD);
}

uint32_t filterGeoIP(const sockaddr* addr) {
    GeoIP_country_code_by_ipnum();
}