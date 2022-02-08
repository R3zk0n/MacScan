// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef BIGRAMKEY_H
#define BIGRAMKEY_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"

@interface BigramKey : NSObject <NSCopying>



@property (retain, nonatomic) NSString *tokenA; // ivar: _tokenA
@property (retain, nonatomic) NSString *tokenB; // ivar: _tokenB


-(id)initWithTokenA:(id)arg0 tokenB:(id)arg1 ;
-(char)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)recycle;


@end


#endif