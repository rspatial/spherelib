
void toRad(double &x) {
  x *= (M_PI / 180); 
}


double distCosine(double lon1, double lat1, double lon2, double lat2) {
  double r=6378137;
  toRad(lon1);
  toRad(lon2);
  toRad(lat1);
  toRad(lat2);
  // todo 
  // check for nearly identical points. 
  // If identical, set distance to zero else do the below
  double distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * 
    cos(lat2) * cos(lon1 - lon2)) * r;
  return distance;
}

