/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class ReusableViewsPool, Component5Node;
@protocol VKMNavDelegate;

__attribute__((visibility("hidden")))
@interface Component5Context : XXUnknownSuperclass <NSCopying> {
	ReusableViewsPool* _viewPool;
	Component5Node* _node;
	id<VKMNavDelegate> _navDelegate;
	double _reuse;
}
@property(assign, nonatomic) __weak id<VKMNavDelegate> navDelegate;
@property(assign, nonatomic) double reuse;
@property(retain, nonatomic) Component5Node* node;
@property(retain, nonatomic) ReusableViewsPool* viewPool;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
@end

