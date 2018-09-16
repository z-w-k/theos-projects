/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSNumber, NSArray, NSString;

@interface MTRGBanner : XXUnknownSuperclass {
	NSMutableArray* _stats;
	BOOL _openInBrowser;
	BOOL _isAppInstalled;
	BOOL _isAppInWhitelist;
	NSString* _type;
	NSString* _bannerID;
	NSString* _urlscheme;
	NSString* _deeplink;
	NSString* _trackingLink;
	NSString* _finalLink;
	NSString* _ageRestrictions;
	NSString* _ctaText;
	NSString* _advertisingLabel;
	NSNumber* _externId;
	unsigned _width;
	unsigned _height;
	unsigned _timeout;
	int _navigationType;
}
@property(readonly, assign, nonatomic) NSArray* stats;
@property(assign, nonatomic) int navigationType;
@property(assign, nonatomic) BOOL isAppInWhitelist;
@property(assign, nonatomic) BOOL isAppInstalled;
@property(assign, nonatomic) BOOL openInBrowser;
@property(assign, nonatomic) unsigned timeout;
@property(assign, nonatomic) unsigned height;
@property(assign, nonatomic) unsigned width;
@property(retain, nonatomic) NSNumber* externId;
@property(copy, nonatomic) NSString* advertisingLabel;
@property(copy, nonatomic) NSString* ctaText;
@property(copy, nonatomic) NSString* ageRestrictions;
@property(copy, nonatomic) NSString* finalLink;
@property(copy, nonatomic) NSString* trackingLink;
@property(copy, nonatomic) NSString* deeplink;
@property(copy, nonatomic) NSString* urlscheme;
@property(readonly, copy, nonatomic) NSString* bannerID;
@property(readonly, copy, nonatomic) NSString* type;
-(void).cxx_destruct;
-(void)addStat:(id)stat;
-(id)initWithType:(id)type bannerID:(id)anId;
@end
