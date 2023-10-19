#include<stdio.h>
int main(){

double lat_ori, lon_ori, lat_des, lon_des;

const float pi=3.14;

const float radius= 6371.0;

printf("\nEnter lon and lat of origin (in degrees)");

printf("\nlat : ");
scanf("%lf",&lat_ori);

printf("\nlon : ");
scanf("%lf",&lon_ori);

printf("\nEnter lon and lat of destination (in degrees)");

printf("\nlat : ");
scanf("%lf",&lat_des);

printf("\nlon : ");
scanf("%lf",&lon_des);


double w = (lat_ori*pi)/180;

double x = (lon_ori*pi)/180;

double y = (lat_des*pi)/180;

double z = (lon_des*pi)/180;







}