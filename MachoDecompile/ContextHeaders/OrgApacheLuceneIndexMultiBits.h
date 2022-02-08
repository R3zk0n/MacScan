// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIBITS_H
#define ORGAPACHELUCENEINDEXMULTIBITS_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexMultiBits : NSObject <OrgApacheLuceneUtilBits>

 {
    IOSObjectArray *subs_;
    IOSIntArray *starts_;
    BOOL defaultValue_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneUtilBitsArray:(id)arg0 withIntArray:(id)arg1 withBoolean:(BOOL)arg2 ;
-(BOOL)checkLengthWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)getWithInt:(int)arg0 ;
-(id)getMatchingSubWithOrgApacheLuceneIndexReaderSlice:(id)arg0 ;
-(int)length;
-(void)dealloc;


@end


#endif