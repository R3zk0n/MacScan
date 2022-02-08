// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREEBLOCKTREETERMSREADER_H
#define ORGAPACHELUCENECODECSBLOCKTREEBLOCKTREETERMSREADER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsFieldsProducer.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneCodecsPostingsReaderBase.h"
#import "JavaUtilTreeMap.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneCodecsBlocktreeBlockTreeTermsReader : OrgApacheLuceneCodecsFieldsProducer <AutoreleaseLiteSupport>

 {
    OrgApacheLuceneStoreIndexInput *termsIn_;
    OrgApacheLuceneCodecsPostingsReaderBase *postingsReader_;
    NSString *segment_;
    int version__;
    BOOL anyAutoPrefixTerms_;
    uint8_t _autoreleaseLiteLastPoolId;
    JavaUtilTreeMap *fields_;
    NSInteger dirOffset_;
    NSInteger indexDirOffset_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneCodecsPostingsReaderBase:(id)arg0 withOrgApacheLuceneIndexSegmentReadState:(id)arg1 ;
-(void)seekDirWithOrgApacheLuceneStoreIndexInput:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)close;
-(id)iterator;
-(id)termsWithNSString:(id)arg0 ;
-(int)size;
-(id)brToStringWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)description;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(void)initialize;


@end


#endif