//
//  UMM2PATask_Start.h
//  ulibm2pa
//
//  Created by Andreas Fink on 02.12.14.
//  Copyright © 2017 Andreas Fink (andreas@fink.org). All rights reserved.
//
// This source is dual licensed either under the GNU GENERAL PUBLIC LICENSE
// Version 3 from 29 June 2007 and other commercial licenses available by
// the author.

#import <ulib/ulib.h>
#import "UMLayerM2PAUserProtocol.h"
@class UMLayerM2PA;

@interface UMM2PATask_Start : UMLayerTask

- (UMM2PATask_Start *)initWithReceiver:(UMLayerM2PA *)rx
                                sender:(id<UMLayerM2PAUserProtocol>)tx;
- (void)main;

@end
