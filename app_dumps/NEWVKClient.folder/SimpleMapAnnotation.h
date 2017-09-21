/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "MKAnnotation.h"

@class NSString, CLGeocoder;

__attribute__((visibility("hidden")))
@interface SimpleMapAnnotation : XXUnknownSuperclass <MKAnnotation> {
	NSString* _title;
	NSString* _subtitle;
	CLGeocoder* _geocoder;
	CLLocationCoordinate2D _coordinate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CLGeocoder* geocoder;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) CLLocationCoordinate2D coordinate;
-(void).cxx_destruct;
-(void)dealloc;
-(id)initWithCoordinate:(CLLocationCoordinate2D)coordinate;
@end
