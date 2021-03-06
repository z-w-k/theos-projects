/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"


__attribute__((visibility("hidden")))
@interface AttachmentComponent : Component5 {
}
+(id)title:(id)title status:(id)status icon:(id)icon;
+(id)titleComponent:(id)component statusComponent:(id)component2 iconComponent:(id)component3;
+(id)textComponentWithTitle:(id)title description:(id)description numberOfLines:(unsigned)lines;
+(id)statusComponentWithText:(id)text;
+(id)titleComponentWithText:(id)text;
+(id)smallPreviewWithTitle:(id)title description:(id)description icon:(id)icon;
+(id)detailedWithPrimaryComponent:(id)primaryComponent descriptionComponent:(id)component;
+(id)detailedWithPrimaryComponent:(id)primaryComponent descriptionComponent:(id)component routeObject:(id)object;
+(id)componentWithState:(id)state;
+(id)attachment:(id)attachment stats:(id)stats;
-(id)nodeForState:(id)state context:(id)context;
-(BOOL)isUtility;
@end

