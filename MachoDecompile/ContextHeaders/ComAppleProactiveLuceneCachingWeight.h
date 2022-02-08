// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENECACHINGWEIGHT_H
#define COMAPPLEPROACTIVELUCENECACHINGWEIGHT_H



#import "OrgApacheLuceneSearchWeight.h"
#import "JavaUtilSet-Protocol.h"

@interface ComAppleProactiveLuceneCachingWeight : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchWeight *w_;
    id<JavaUtilSet> *cachedTerms_;
    float valueForNormalization_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 ;
-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif