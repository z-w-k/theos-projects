/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Renderer.h"

@class VKNotification;

__attribute__((visibility("hidden")))
@interface NotificationRenderer : Renderer {
}
@property(retain, nonatomic) VKNotification* domain;
+(void)build:(id)build;
+(void)prepareLayout:(id)layout;
+(id)rendererElements;
-(void)actionUserPhoto:(id)photo;
-(void)actionMainPhoto:(id)photo;
-(BOOL)cellSelected:(id)selected;
-(void)renderCell:(id)cell;
-(void)setupCell:(id)cell;
@end

