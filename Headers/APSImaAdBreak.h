//
//  APSImaAdBreak.h
//  Veeplay
//
//  Created by Ovidiu Nitan on 02/12/2019.
//  Copyright © 2019 Appscend. All rights reserved.
//

#import <Foundation/Foundation.h>

@class APSVASTAdBreak;

NS_ASSUME_NONNULL_BEGIN

@protocol APSImaAdBreakProtocol

- (instancetype) initWithAdBreak:(APSVASTAdBreak *)adBreak;
- (void) trigger;

@property (weak, readonly, nonatomic) APSVASTAdBreak *adBreak;

@end

@interface APSImaAdBreak : NSObject <APSImaAdBreakProtocol>
@property (weak, readonly, nonatomic) APSVASTAdBreak *adBreak;
@end

NS_ASSUME_NONNULL_END
