/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "AttachmentsLayout.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface ScrollAttachmentsLayout : AttachmentsLayout {
	float offset;
}
@property(retain, nonatomic) UIScrollView* view;
-(void)alignAttachments:(id)attachments;
-(int)indexForPoint:(CGPoint)point;
-(id)initWithContainer:(id)container style:(id)style;
@end
