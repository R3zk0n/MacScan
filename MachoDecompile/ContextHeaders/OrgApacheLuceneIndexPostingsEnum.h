// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXPOSTINGSENUM_H
#define ORGAPACHELUCENEINDEXPOSTINGSENUM_H



#import "OrgApacheLuceneSearchDocIdSetIterator.h"
#import "OrgApacheLuceneUtilAttributeSource.h"

@interface OrgApacheLuceneIndexPostingsEnum : OrgApacheLuceneSearchDocIdSetIterator {
    OrgApacheLuceneUtilAttributeSource *atts_;
}




-(id)init;
-(id)attributes;
-(void)dealloc;
+(BOOL)featureRequestedWithInt:(int)arg0 withShort:(short)arg1 ;


@end


#endif