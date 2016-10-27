//
//  UMM2PAState_Idle.h
//  ulibm2pa
//
//  Created by Andreas Fink on 05/12/14.
//  Copyright (c) 2016 Andreas Fink
//
// This source is dual licensed either under the GNU GENERAL PUBLIC LICENSE
// Version 3 from 29 June 2007 and other commercial licenses available by
// the author.

#import "UMM2PAInitialAlignmentControl_State.h"

@interface UMM2PAInitialAlignmentControl_Idle : UMM2PAInitialAlignmentControl_State


- (UMM2PAInitialAlignmentControl_State *)eventStart:(UMLayerM2PA *)link;

@end
