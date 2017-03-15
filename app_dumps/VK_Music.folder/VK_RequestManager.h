/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_RequestDelegate.h"

@class NSMutableSet, NSString;
@protocol VK_RequestErrorHandler;

__attribute__((visibility("hidden")))
@interface VK_RequestManager : XXUnknownSuperclass <VK_RequestDelegate> {
	id<VK_RequestErrorHandler> _errorHandler;
	NSMutableSet* _currentRequests;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VK_RequestErrorHandler> errorHandler;
@property(retain, nonatomic) NSMutableSet* currentRequests;
+(id)shared;
-(void).cxx_destruct;
-(BOOL)handleReuqestError:(id)error;
-(void)requestCompleted:(id)completed;
-(void)requestStarted:(id)started;
-(void)startReuest:(id)reuest;
-(id)init;
@end
