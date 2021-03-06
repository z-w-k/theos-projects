/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CLLocationManagerDelegate.h"
#import "MRAbstractDataProvider.h"

@class NSString, CLLocationManager, NSNumber;

@interface MRLocationDataProvider : MRAbstractDataProvider <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _accuracy;
	NSNumber* _speed;
	NSNumber* _timestamp;
	BOOL _isUpdatingLocation;
	int _locationTrackingMode;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int locationTrackingMode;
@property(assign) BOOL isUpdatingLocation;
-(void).cxx_destruct;
-(void)putDataToBuilder:(id)builder;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)handleLocation:(id)location;
-(void)startUpdate;
-(void)createLocationManager;
-(void)collectData;
-(id)init;
@end

