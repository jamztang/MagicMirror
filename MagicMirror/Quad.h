//
//  Quad.h
//  MagicMirror2
//
//  Created by James Tang on 9/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MSShapePath;

@interface Quad : NSObject

@property (nonatomic) CGPoint tl;
@property (nonatomic) CGPoint tr;
@property (nonatomic) CGPoint br;
@property (nonatomic) CGPoint bl;

+ (instancetype)quadWithShapePath:(id <MSShapePath>)path;

@end
