// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTDOCUMENT_H
#define ORGAPACHELUCENEDOCUMENTDOCUMENT_H


#import <Foundation/Foundation.h>

#import "AutoreleaseLiteSupport-Protocol.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneDocumentDocument : NSObject <AutoreleaseLiteSupport, JavaLangIterable>

 {
    uint8_t _autoreleaseLiteLastPoolId;
    id<JavaUtilList> *fields_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)init;
-(id)iterator;
-(void)addWithOrgApacheLuceneIndexIndexableField:(id)arg0 ;
-(void)removeAllFields;
-(void)removeFieldWithNSString:(id)arg0 ;
-(void)removeFieldsWithNSString:(id)arg0 ;
-(id)getBinaryValuesWithNSString:(id)arg0 ;
-(id)getBinaryValueWithNSString:(id)arg0 ;
-(id)getFieldWithNSString:(id)arg0 ;
-(id)getFieldsWithNSString:(id)arg0 ;
-(id)getFields;
-(id)getValuesWithNSString:(id)arg0 ;
-(id)getWithNSString:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(void)initialize;


@end


#endif