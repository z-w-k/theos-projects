/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class NSString, UILabel, UIButton;

__attribute__((visibility("hidden")))
@interface BlockCellHeaderView : XXUnknownSuperclass {
	NSString* _title;
	NSString* _subtitle;
	UIButton* _actionButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
}
@property(retain, nonatomic) UIButton* actionButton;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(retain, nonatomic) UILabel* subtitleLabel;
@property(retain, nonatomic) UILabel* titleLabel;
+(float)heightForTitle:(id)title subtitle:(id)subtitle;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
