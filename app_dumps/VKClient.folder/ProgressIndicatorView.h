/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface ProgressIndicatorView : XXUnknownSuperclass {
	CAShapeLayer* _progressShapeLayer;
	UIButton* _cancelButton;
	float _progress;
}
@property(assign, nonatomic) float progress;
@property(retain, nonatomic) UIButton* cancelButton;
@property(retain, nonatomic) CAShapeLayer* progressShapeLayer;
-(void).cxx_destruct;
-(id)initWithFrame:(CGRect)frame;
@end

