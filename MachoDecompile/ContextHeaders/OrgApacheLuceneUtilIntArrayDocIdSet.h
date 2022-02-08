// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILINTARRAYDOCIDSET_H
#define ORGAPACHELUCENEUTILINTARRAYDOCIDSET_H



#import "OrgApacheLuceneSearchDocIdSet.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilIntArrayDocIdSet : OrgApacheLuceneSearchDocIdSet {
    IOSIntArray *docs_;
    int length_;
}




-(id)initWithIntArray:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)ramBytesUsed;
-(id)iterator;
-(void)dealloc;
+(void)initialize;


@end


#endif