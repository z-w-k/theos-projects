/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSMutableArray, NSArray, UIImage;

__attribute__((visibility("hidden")))
@interface VMSamplesView : XXUnknownSuperclass {
	NSArray* _samples;
	float _progress;
	NSMutableArray* _ticksPool;
	NSArray* _ticksCache;
	float _ticksCacheWidth;
	UIImage* _tickImage;
}
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) NSArray* samples;
@property(retain, nonatomic) UIImage* tickImage;
@property(assign, nonatomic) float ticksCacheWidth;
@property(retain, nonatomic) NSArray* ticksCache;
@property(retain, nonatomic) NSMutableArray* ticksPool;
-(void).cxx_destruct;
-(id)tickImageName;
-(void)layoutSubviews;
-(id)makeTickLayer;
-(id)initWithFrame:(CGRect)frame;
@end

