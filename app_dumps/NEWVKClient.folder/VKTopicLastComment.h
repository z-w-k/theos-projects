/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKTopicComment.h"

@class VKTopic;

__attribute__((visibility("hidden")))
@interface VKTopicLastComment : VKTopicComment {
	VKTopic* _topic;
}
@property(retain, nonatomic) VKTopic* topic;
+(id)from:(id)from;
-(void).cxx_destruct;
-(id)initWithTopic:(id)topic;
@end
