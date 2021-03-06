/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSMutableArray;

@interface MTRGVastObject : XXUnknownSuperclass {
	NSMutableArray* _impressions;
	NSMutableArray* _creatives;
	NSMutableArray* _extensions;
	NSMutableArray* _errorUrls;
	int _type;
	NSString* _adSystem;
}
@property(readonly, assign, nonatomic) NSArray* errorUrls;
@property(readonly, assign, nonatomic) NSArray* extensions;
@property(readonly, assign, nonatomic) NSArray* creatives;
@property(readonly, assign, nonatomic) NSArray* impressions;
@property(retain, nonatomic) NSString* adSystem;
@property(assign) int type;
-(void).cxx_destruct;
-(id)findExtensionWithType:(id)type;
-(void)addErrorUrl:(id)url;
-(void)addExtension:(id)extension;
-(void)addCreative:(id)creative;
-(void)addImpression:(id)impression;
-(id)init;
@end

