// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBITS_MATCHNOBITS_H
#define ORGAPACHELUCENEUTILBITS_MATCHNOBITS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneUtilBits_MatchNoBits : NSObject <OrgApacheLuceneUtilBits>

 {
    int len_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(BOOL)getWithInt:(int)arg0 ;
-(int)length;


@end


#endif