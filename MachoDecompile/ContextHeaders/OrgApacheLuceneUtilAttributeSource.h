// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILATTRIBUTESOURCE_H
#define ORGAPACHELUCENEUTILATTRIBUTESOURCE_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAttributeFactory.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneUtilAttributeSource : NSObject {
    id<JavaUtilMap> *attributes_;
    id<JavaUtilMap> *attributeImpls_;
    IOSObjectArray *currentState_;
    OrgApacheLuceneUtilAttributeFactory *factory_;
}




-(id)init;
-(id)initWithOrgApacheLuceneUtilAttributeSource:(id)arg0 ;
-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 ;
-(id)getAttributeFactory;
-(id)getAttributeClassesIterator;
-(id)getAttributeImplsIterator;
-(void)addAttributeImplWithOrgApacheLuceneUtilAttributeImpl:(id)arg0 ;
-(id)addAttributeWithIOSClass:(id)arg0 ;
-(BOOL)hasAttributes;
-(BOOL)hasAttributeWithIOSClass:(id)arg0 ;
-(id)getAttributeWithIOSClass:(id)arg0 ;
-(id)getCurrentState;
-(void)clearAttributes;
-(id)captureState;
-(void)restoreStateWithOrgApacheLuceneUtilAttributeSource_State:(id)arg0 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)reflectAsStringWithBoolean:(BOOL)arg0 ;
-(void)reflectWithWithOrgApacheLuceneUtilAttributeReflector:(id)arg0 ;
-(id)cloneAttributes;
-(void)copyToWithOrgApacheLuceneUtilAttributeSource:(id)arg0 ;
-(id)description;
-(void)dealloc;
+(id)getAttributeInterfacesWithIOSClass:(id)arg0 ;
+(void)initialize;


@end


#endif