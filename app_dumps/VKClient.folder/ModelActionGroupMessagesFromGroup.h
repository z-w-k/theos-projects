/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionGroupMessagesFromGroup : ModelAction {
	BOOL _allow;
}
@property(assign, nonatomic) BOOL allow;
@property(retain, nonatomic) NSNumber* target;
+(int)domainType;
-(id)actionSuccessMessage:(id)message;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(id)allow:(BOOL)allow;
@end

