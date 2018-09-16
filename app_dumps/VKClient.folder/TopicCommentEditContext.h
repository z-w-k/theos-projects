/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PostEditContext.h"

@class VKTopicComment;

__attribute__((visibility("hidden")))
@interface TopicCommentEditContext : PostEditContext {
}
@property(retain, nonatomic) VKTopicComment* domain;
+(int)attachmentsLimit;
-(id)buildPostOptions;
-(void)useDomain:(id)domain edit:(BOOL)edit;
-(id)confirmAction:(id)action;
-(id)uploadTarget;
-(unsigned)textLengthMax;
-(unsigned)textLengthMin;
-(id)title;
@end
