/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRemoteAction.h"
#import "VKRenderable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRemoteActionEnableTopNewsfeed : VKRenderable <VKRemoteAction> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)url;
-(void)runInContext:(id)context completion:(id)completion;
-(int)remoteActionType;
-(BOOL)process:(id)process context:(id)context;
@end
