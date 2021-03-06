/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocationManager, LocationStat, VKTimeout;

__attribute__((visibility("hidden")))
@interface LocationTracker : XXUnknownSuperclass {
	VKTimeout* _timeout;
	LocationStat* _lastLocationStat;
	CLLocationManager* _locationManager;
}
@property(retain, nonatomic) LocationStat* lastLocationStat;
@property(retain, nonatomic) VKTimeout* timeout;
@property(retain, nonatomic) CLLocationManager* locationManager;
-(void).cxx_destruct;
-(void)storeLastLocationStat:(id)stat;
-(id)locationStat;
-(id)initWithUpdateTimeout:(double)updateTimeout;
@end

