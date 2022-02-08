// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDDOC_H
#define ORGAPACHELUCENESEARCHFIELDDOC_H



#import "OrgApacheLuceneSearchScoreDoc.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchFieldDoc : OrgApacheLuceneSearchScoreDoc {
    IOSObjectArray *fields_;
}




-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withNSObjectArray:(id)arg2 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withNSObjectArray:(id)arg2 withInt:(int)arg3 ;
-(id)description;
-(void)dealloc;


@end


#endif