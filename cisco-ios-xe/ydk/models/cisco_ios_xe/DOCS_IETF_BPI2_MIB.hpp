#ifndef _DOCS_IETF_BPI2_MIB_
#define _DOCS_IETF_BPI2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_IETF_BPI2_MIB {

class DOCSIETFBPI2MIB : public ydk::Entity
{
    public:
        DOCSIETFBPI2MIB();
        ~DOCSIETFBPI2MIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class DocsIetfBpi2CodeDownloadControl; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl
        class DocsIetfBpi2CmBaseTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable
        class DocsIetfBpi2CmTEKTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable
        class DocsIetfBpi2CmIpMulticastMapTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable
        class DocsIetfBpi2CmDeviceCertTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable
        class DocsIetfBpi2CmCryptoSuiteTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable
        class DocsIetfBpi2CmtsBaseTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable
        class DocsIetfBpi2CmtsAuthTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable
        class DocsIetfBpi2CmtsTEKTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable
        class DocsIetfBpi2CmtsIpMulticastMapTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable
        class DocsIetfBpi2CmtsMulticastAuthTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable
        class DocsIetfBpi2CmtsProvisionedCmCertTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable
        class DocsIetfBpi2CmtsCACertTable; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable

        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl> docsietfbpi2codedownloadcontrol;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable> docsietfbpi2cmbasetable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable> docsietfbpi2cmtektable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable> docsietfbpi2cmipmulticastmaptable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable> docsietfbpi2cmdevicecerttable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable> docsietfbpi2cmcryptosuitetable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable> docsietfbpi2cmtsbasetable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable> docsietfbpi2cmtsauthtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable> docsietfbpi2cmtstektable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable> docsietfbpi2cmtsipmulticastmaptable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable> docsietfbpi2cmtsmulticastauthtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable> docsietfbpi2cmtsprovisionedcmcerttable;
        std::shared_ptr<cisco_ios_xe::DOCS_IETF_BPI2_MIB::DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable> docsietfbpi2cmtscacerttable;
        
}; // DOCSIETFBPI2MIB


class DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl : public ydk::Entity
{
    public:
        DocsIetfBpi2CodeDownloadControl();
        ~DocsIetfBpi2CodeDownloadControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsietfbpi2codedownloadstatuscode; //type: DocsIetfBpi2CodeDownloadStatusCode
        ydk::YLeaf docsietfbpi2codedownloadstatusstring; //type: string
        ydk::YLeaf docsietfbpi2codemfgorgname; //type: string
        ydk::YLeaf docsietfbpi2codemfgcodeaccessstart; //type: string
        ydk::YLeaf docsietfbpi2codemfgcvcaccessstart; //type: string
        ydk::YLeaf docsietfbpi2codecosignerorgname; //type: string
        ydk::YLeaf docsietfbpi2codecosignercodeaccessstart; //type: string
        ydk::YLeaf docsietfbpi2codecosignercvcaccessstart; //type: string
        ydk::YLeaf docsietfbpi2codecvcupdate; //type: binary
        class DocsIetfBpi2CodeDownloadStatusCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl


class DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmBaseTable();
        ~DocsIetfBpi2CmBaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmBaseEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry

        ydk::YList docsietfbpi2cmbaseentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmBaseEntry();
        ~DocsIetfBpi2CmBaseEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmprivacyenable; //type: boolean
        ydk::YLeaf docsietfbpi2cmpublickey; //type: binary
        ydk::YLeaf docsietfbpi2cmauthstate; //type: DocsIetfBpi2CmAuthState
        ydk::YLeaf docsietfbpi2cmauthkeysequencenumber; //type: int32
        ydk::YLeaf docsietfbpi2cmauthexpiresold; //type: string
        ydk::YLeaf docsietfbpi2cmauthexpiresnew; //type: string
        ydk::YLeaf docsietfbpi2cmauthreset; //type: boolean
        ydk::YLeaf docsietfbpi2cmauthgracetime; //type: int32
        ydk::YLeaf docsietfbpi2cmtekgracetime; //type: int32
        ydk::YLeaf docsietfbpi2cmauthwaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmreauthwaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmopwaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmrekeywaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmauthrejectwaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmsamapwaittimeout; //type: int32
        ydk::YLeaf docsietfbpi2cmsamapmaxretries; //type: int32
        ydk::YLeaf docsietfbpi2cmauthentinfos; //type: uint32
        ydk::YLeaf docsietfbpi2cmauthrequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmauthreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmauthrejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmauthinvalids; //type: uint32
        ydk::YLeaf docsietfbpi2cmauthrejecterrorcode; //type: DocsIetfBpi2CmAuthRejectErrorCode
        ydk::YLeaf docsietfbpi2cmauthrejecterrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmauthinvaliderrorcode; //type: DocsIetfBpi2CmAuthInvalidErrorCode
        ydk::YLeaf docsietfbpi2cmauthinvaliderrorstring; //type: string
        class DocsIetfBpi2CmAuthState;
        class DocsIetfBpi2CmAuthRejectErrorCode;
        class DocsIetfBpi2CmAuthInvalidErrorCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmTEKTable();
        ~DocsIetfBpi2CmTEKTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmTEKEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry

        ydk::YList docsietfbpi2cmtekentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmTEKEntry();
        ~DocsIetfBpi2CmTEKEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmteksaid; //type: int32
        ydk::YLeaf docsietfbpi2cmteksatype; //type: DocsBpkmSAType
        ydk::YLeaf docsietfbpi2cmtekdataencryptalg; //type: DocsBpkmDataEncryptAlg
        ydk::YLeaf docsietfbpi2cmtekdataauthentalg; //type: DocsBpkmDataAuthentAlg
        ydk::YLeaf docsietfbpi2cmtekstate; //type: DocsIetfBpi2CmTEKState
        ydk::YLeaf docsietfbpi2cmtekkeysequencenumber; //type: int32
        ydk::YLeaf docsietfbpi2cmtekexpiresold; //type: string
        ydk::YLeaf docsietfbpi2cmtekexpiresnew; //type: string
        ydk::YLeaf docsietfbpi2cmtekkeyrequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtekkeyreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtekkeyrejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmtekinvalids; //type: uint32
        ydk::YLeaf docsietfbpi2cmtekauthpends; //type: uint32
        ydk::YLeaf docsietfbpi2cmtekkeyrejecterrorcode; //type: DocsIetfBpi2CmTEKKeyRejectErrorCode
        ydk::YLeaf docsietfbpi2cmtekkeyrejecterrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmtekinvaliderrorcode; //type: DocsIetfBpi2CmTEKInvalidErrorCode
        ydk::YLeaf docsietfbpi2cmtekinvaliderrorstring; //type: string
        class DocsIetfBpi2CmTEKState;
        class DocsIetfBpi2CmTEKKeyRejectErrorCode;
        class DocsIetfBpi2CmTEKInvalidErrorCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmIpMulticastMapTable();
        ~DocsIetfBpi2CmIpMulticastMapTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmIpMulticastMapEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry

        ydk::YList docsietfbpi2cmipmulticastmapentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmIpMulticastMapEntry();
        ~DocsIetfBpi2CmIpMulticastMapEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmipmulticastindex; //type: uint32
        ydk::YLeaf docsietfbpi2cmipmulticastaddresstype; //type: InetAddressType
        ydk::YLeaf docsietfbpi2cmipmulticastaddress; //type: binary
        ydk::YLeaf docsietfbpi2cmipmulticastsaid; //type: uint32
        ydk::YLeaf docsietfbpi2cmipmulticastsamapstate; //type: DocsIetfBpi2CmIpMulticastSAMapState
        ydk::YLeaf docsietfbpi2cmipmulticastsamaprequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmipmulticastsamapreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmipmulticastsamaprejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmipmulticastsamaprejecterrorcode; //type: DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode
        ydk::YLeaf docsietfbpi2cmipmulticastsamaprejecterrorstring; //type: string
        class DocsIetfBpi2CmIpMulticastSAMapState;
        class DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmDeviceCertTable();
        ~DocsIetfBpi2CmDeviceCertTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmDeviceCertEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry

        ydk::YList docsietfbpi2cmdevicecertentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmDeviceCertEntry();
        ~DocsIetfBpi2CmDeviceCertEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmdevicecmcert; //type: binary
        ydk::YLeaf docsietfbpi2cmdevicemanufcert; //type: binary

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmDeviceCertTable::DocsIetfBpi2CmDeviceCertEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmCryptoSuiteTable();
        ~DocsIetfBpi2CmCryptoSuiteTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmCryptoSuiteEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry

        ydk::YList docsietfbpi2cmcryptosuiteentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmCryptoSuiteEntry();
        ~DocsIetfBpi2CmCryptoSuiteEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmcryptosuiteindex; //type: uint32
        ydk::YLeaf docsietfbpi2cmcryptosuitedataencryptalg; //type: DocsBpkmDataEncryptAlg
        ydk::YLeaf docsietfbpi2cmcryptosuitedataauthentalg; //type: DocsBpkmDataAuthentAlg

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmCryptoSuiteTable::DocsIetfBpi2CmCryptoSuiteEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsBaseTable();
        ~DocsIetfBpi2CmtsBaseTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsBaseEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry

        ydk::YList docsietfbpi2cmtsbaseentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsBaseEntry();
        ~DocsIetfBpi2CmtsBaseEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmtsdefaultauthlifetime; //type: int32
        ydk::YLeaf docsietfbpi2cmtsdefaultteklifetime; //type: int32
        ydk::YLeaf docsietfbpi2cmtsdefaultselfsignedmanufcerttrust; //type: DocsIetfBpi2CmtsDefaultSelfSignedManufCertTrust
        ydk::YLeaf docsietfbpi2cmtscheckcertvalidityperiods; //type: boolean
        ydk::YLeaf docsietfbpi2cmtsauthentinfos; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthrequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthrejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthinvalids; //type: uint32
        ydk::YLeaf docsietfbpi2cmtssamaprequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtssamapreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtssamaprejects; //type: uint32
        class DocsIetfBpi2CmtsDefaultSelfSignedManufCertTrust;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsAuthTable();
        ~DocsIetfBpi2CmtsAuthTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsAuthEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry

        ydk::YList docsietfbpi2cmtsauthentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsAuthEntry();
        ~DocsIetfBpi2CmtsAuthEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmtsauthcmmacaddress; //type: string
        ydk::YLeaf docsietfbpi2cmtsauthcmbpiversion; //type: DocsIetfBpi2CmtsAuthCmBpiVersion
        ydk::YLeaf docsietfbpi2cmtsauthcmpublickey; //type: binary
        ydk::YLeaf docsietfbpi2cmtsauthcmkeysequencenumber; //type: int32
        ydk::YLeaf docsietfbpi2cmtsauthcmexpiresold; //type: string
        ydk::YLeaf docsietfbpi2cmtsauthcmexpiresnew; //type: string
        ydk::YLeaf docsietfbpi2cmtsauthcmlifetime; //type: int32
        ydk::YLeaf docsietfbpi2cmtsauthcmreset; //type: DocsIetfBpi2CmtsAuthCmReset
        ydk::YLeaf docsietfbpi2cmtsauthcminfos; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthcmrequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthcmreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthcmrejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthcminvalids; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthrejecterrorcode; //type: DocsIetfBpi2CmtsAuthRejectErrorCode
        ydk::YLeaf docsietfbpi2cmtsauthrejecterrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmtsauthinvaliderrorcode; //type: DocsIetfBpi2CmtsAuthInvalidErrorCode
        ydk::YLeaf docsietfbpi2cmtsauthinvaliderrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmtsauthprimarysaid; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsauthbpkmcmcertvalid; //type: DocsIetfBpi2CmtsAuthBpkmCmCertValid
        ydk::YLeaf docsietfbpi2cmtsauthbpkmcmcert; //type: binary
        ydk::YLeaf docsietfbpi2cmtsauthcacertindexptr; //type: uint32
        class DocsIetfBpi2CmtsAuthCmBpiVersion;
        class DocsIetfBpi2CmtsAuthCmReset;
        class DocsIetfBpi2CmtsAuthRejectErrorCode;
        class DocsIetfBpi2CmtsAuthInvalidErrorCode;
        class DocsIetfBpi2CmtsAuthBpkmCmCertValid;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsTEKTable();
        ~DocsIetfBpi2CmtsTEKTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsTEKEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry

        ydk::YList docsietfbpi2cmtstekentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsTEKEntry();
        ~DocsIetfBpi2CmtsTEKEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmtsteksaid; //type: int32
        ydk::YLeaf docsietfbpi2cmtsteksatype; //type: DocsBpkmSAType
        ydk::YLeaf docsietfbpi2cmtstekdataencryptalg; //type: DocsBpkmDataEncryptAlg
        ydk::YLeaf docsietfbpi2cmtstekdataauthentalg; //type: DocsBpkmDataAuthentAlg
        ydk::YLeaf docsietfbpi2cmtsteklifetime; //type: int32
        ydk::YLeaf docsietfbpi2cmtstekkeysequencenumber; //type: int32
        ydk::YLeaf docsietfbpi2cmtstekexpiresold; //type: string
        ydk::YLeaf docsietfbpi2cmtstekexpiresnew; //type: string
        ydk::YLeaf docsietfbpi2cmtstekreset; //type: boolean
        ydk::YLeaf docsietfbpi2cmtskeyrequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtskeyreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtskeyrejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmtstekinvalids; //type: uint32
        ydk::YLeaf docsietfbpi2cmtskeyrejecterrorcode; //type: DocsIetfBpi2CmtsKeyRejectErrorCode
        ydk::YLeaf docsietfbpi2cmtskeyrejecterrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmtstekinvaliderrorcode; //type: DocsIetfBpi2CmtsTEKInvalidErrorCode
        ydk::YLeaf docsietfbpi2cmtstekinvaliderrorstring; //type: string
        class DocsIetfBpi2CmtsKeyRejectErrorCode;
        class DocsIetfBpi2CmtsTEKInvalidErrorCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsIpMulticastMapTable();
        ~DocsIetfBpi2CmtsIpMulticastMapTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsIpMulticastMapEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry

        ydk::YList docsietfbpi2cmtsipmulticastmapentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsIpMulticastMapEntry();
        ~DocsIetfBpi2CmtsIpMulticastMapEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmtsipmulticastindex; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsipmulticastaddresstype; //type: InetAddressType
        ydk::YLeaf docsietfbpi2cmtsipmulticastaddress; //type: binary
        ydk::YLeaf docsietfbpi2cmtsipmulticastmask; //type: binary
        ydk::YLeaf docsietfbpi2cmtsipmulticastsaid; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsipmulticastsatype; //type: DocsBpkmSAType
        ydk::YLeaf docsietfbpi2cmtsipmulticastdataencryptalg; //type: DocsBpkmDataEncryptAlg
        ydk::YLeaf docsietfbpi2cmtsipmulticastdataauthentalg; //type: DocsBpkmDataAuthentAlg
        ydk::YLeaf docsietfbpi2cmtsipmulticastsamaprequests; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsipmulticastsamapreplies; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsipmulticastsamaprejects; //type: uint32
        ydk::YLeaf docsietfbpi2cmtsipmulticastsamaprejecterrorcode; //type: DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode
        ydk::YLeaf docsietfbpi2cmtsipmulticastsamaprejecterrorstring; //type: string
        ydk::YLeaf docsietfbpi2cmtsipmulticastmapcontrol; //type: RowStatus
        ydk::YLeaf docsietfbpi2cmtsipmulticastmapstoragetype; //type: StorageType
        class DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsMulticastAuthTable();
        ~DocsIetfBpi2CmtsMulticastAuthTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsMulticastAuthEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry

        ydk::YList docsietfbpi2cmtsmulticastauthentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsMulticastAuthEntry();
        ~DocsIetfBpi2CmtsMulticastAuthEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsietfbpi2cmtsmulticastauthsaid; //type: int32
        ydk::YLeaf docsietfbpi2cmtsmulticastauthcmmacaddress; //type: string
        ydk::YLeaf docsietfbpi2cmtsmulticastauthcontrol; //type: RowStatus

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsMulticastAuthTable::DocsIetfBpi2CmtsMulticastAuthEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsProvisionedCmCertTable();
        ~DocsIetfBpi2CmtsProvisionedCmCertTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsProvisionedCmCertEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry

        ydk::YList docsietfbpi2cmtsprovisionedcmcertentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsProvisionedCmCertEntry();
        ~DocsIetfBpi2CmtsProvisionedCmCertEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsietfbpi2cmtsprovisionedcmcertmacaddress; //type: string
        ydk::YLeaf docsietfbpi2cmtsprovisionedcmcerttrust; //type: DocsIetfBpi2CmtsProvisionedCmCertTrust
        ydk::YLeaf docsietfbpi2cmtsprovisionedcmcertsource; //type: DocsIetfBpi2CmtsProvisionedCmCertSource
        ydk::YLeaf docsietfbpi2cmtsprovisionedcmcertstatus; //type: RowStatus
        ydk::YLeaf docsietfbpi2cmtsprovisionedcmcert; //type: binary
        class DocsIetfBpi2CmtsProvisionedCmCertTrust;
        class DocsIetfBpi2CmtsProvisionedCmCertSource;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsCACertTable();
        ~DocsIetfBpi2CmtsCACertTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIetfBpi2CmtsCACertEntry; //type: DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry

        ydk::YList docsietfbpi2cmtscacertentry;
        
}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable


class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry : public ydk::Entity
{
    public:
        DocsIetfBpi2CmtsCACertEntry();
        ~DocsIetfBpi2CmtsCACertEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsietfbpi2cmtscacertindex; //type: uint32
        ydk::YLeaf docsietfbpi2cmtscacertsubject; //type: string
        ydk::YLeaf docsietfbpi2cmtscacertissuer; //type: string
        ydk::YLeaf docsietfbpi2cmtscacertserialnumber; //type: binary
        ydk::YLeaf docsietfbpi2cmtscacerttrust; //type: DocsIetfBpi2CmtsCACertTrust
        ydk::YLeaf docsietfbpi2cmtscacertsource; //type: DocsIetfBpi2CmtsCACertSource
        ydk::YLeaf docsietfbpi2cmtscacertstatus; //type: RowStatus
        ydk::YLeaf docsietfbpi2cmtscacert; //type: binary
        ydk::YLeaf docsietfbpi2cmtscacertthumbprint; //type: binary
        class DocsIetfBpi2CmtsCACertTrust;
        class DocsIetfBpi2CmtsCACertSource;

}; // DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry

class DocsBpkmDataEncryptAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des56CbcMode;
        static const ydk::Enum::YLeaf des40CbcMode;
        static const ydk::Enum::YLeaf t3Des128CbcMode;
        static const ydk::Enum::YLeaf aes128CbcMode;
        static const ydk::Enum::YLeaf aes256CbcMode;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "des56CbcMode") return 1;
            if (name == "des40CbcMode") return 2;
            if (name == "t3Des128CbcMode") return 3;
            if (name == "aes128CbcMode") return 4;
            if (name == "aes256CbcMode") return 5;
            return -1;
        }
};

class DocsBpkmDataAuthentAlg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hmacSha196;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "hmacSha196") return 1;
            return -1;
        }
};

class DocsBpkmSAType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "primary") return 1;
            if (name == "static") return 2;
            if (name == "dynamic") return 3;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CodeDownloadControl::DocsIetfBpi2CodeDownloadStatusCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf configFileCvcVerified;
        static const ydk::Enum::YLeaf configFileCvcRejected;
        static const ydk::Enum::YLeaf snmpCvcVerified;
        static const ydk::Enum::YLeaf snmpCvcRejected;
        static const ydk::Enum::YLeaf codeFileVerified;
        static const ydk::Enum::YLeaf codeFileRejected;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "configFileCvcVerified") return 1;
            if (name == "configFileCvcRejected") return 2;
            if (name == "snmpCvcVerified") return 3;
            if (name == "snmpCvcRejected") return 4;
            if (name == "codeFileVerified") return 5;
            if (name == "codeFileRejected") return 6;
            if (name == "other") return 7;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf authWait;
        static const ydk::Enum::YLeaf authorized;
        static const ydk::Enum::YLeaf reauthWait;
        static const ydk::Enum::YLeaf authRejectWait;
        static const ydk::Enum::YLeaf silent;

        static int get_enum_value(const std::string & name) {
            if (name == "start") return 1;
            if (name == "authWait") return 2;
            if (name == "authorized") return 3;
            if (name == "reauthWait") return 4;
            if (name == "authRejectWait") return 5;
            if (name == "silent") return 6;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedCm;
        static const ydk::Enum::YLeaf unauthorizedSaid;
        static const ydk::Enum::YLeaf permanentAuthorizationFailure;
        static const ydk::Enum::YLeaf timeOfDayNotAcquired;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedCm") return 3;
            if (name == "unauthorizedSaid") return 4;
            if (name == "permanentAuthorizationFailure") return 8;
            if (name == "timeOfDayNotAcquired") return 11;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmBaseTable::DocsIetfBpi2CmBaseEntry::DocsIetfBpi2CmAuthInvalidErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedCm;
        static const ydk::Enum::YLeaf unsolicited;
        static const ydk::Enum::YLeaf invalidKeySequence;
        static const ydk::Enum::YLeaf keyRequestAuthenticationFailure;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedCm") return 3;
            if (name == "unsolicited") return 5;
            if (name == "invalidKeySequence") return 6;
            if (name == "keyRequestAuthenticationFailure") return 7;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf opWait;
        static const ydk::Enum::YLeaf opReauthWait;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf rekeyWait;
        static const ydk::Enum::YLeaf rekeyReauthWait;

        static int get_enum_value(const std::string & name) {
            if (name == "start") return 1;
            if (name == "opWait") return 2;
            if (name == "opReauthWait") return 3;
            if (name == "operational") return 4;
            if (name == "rekeyWait") return 5;
            if (name == "rekeyReauthWait") return 6;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKKeyRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedSaid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedSaid") return 4;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmTEKTable::DocsIetfBpi2CmTEKEntry::DocsIetfBpi2CmTEKInvalidErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf invalidKeySequence;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "invalidKeySequence") return 6;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf start;
        static const ydk::Enum::YLeaf mapWait;
        static const ydk::Enum::YLeaf mapped;

        static int get_enum_value(const std::string & name) {
            if (name == "start") return 1;
            if (name == "mapWait") return 2;
            if (name == "mapped") return 3;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmIpMulticastMapTable::DocsIetfBpi2CmIpMulticastMapEntry::DocsIetfBpi2CmIpMulticastSAMapRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf noAuthForRequestedDSFlow;
        static const ydk::Enum::YLeaf dsFlowNotMappedToSA;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "noAuthForRequestedDSFlow") return 9;
            if (name == "dsFlowNotMappedToSA") return 10;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsBaseTable::DocsIetfBpi2CmtsBaseEntry::DocsIetfBpi2CmtsDefaultSelfSignedManufCertTrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf untrusted;

        static int get_enum_value(const std::string & name) {
            if (name == "trusted") return 1;
            if (name == "untrusted") return 2;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmBpiVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bpi;
        static const ydk::Enum::YLeaf bpiPlus;

        static int get_enum_value(const std::string & name) {
            if (name == "bpi") return 0;
            if (name == "bpiPlus") return 1;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthCmReset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noResetRequested;
        static const ydk::Enum::YLeaf invalidateAuth;
        static const ydk::Enum::YLeaf sendAuthInvalid;
        static const ydk::Enum::YLeaf invalidateTeks;

        static int get_enum_value(const std::string & name) {
            if (name == "noResetRequested") return 1;
            if (name == "invalidateAuth") return 2;
            if (name == "sendAuthInvalid") return 3;
            if (name == "invalidateTeks") return 4;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedCm;
        static const ydk::Enum::YLeaf unauthorizedSaid;
        static const ydk::Enum::YLeaf permanentAuthorizationFailure;
        static const ydk::Enum::YLeaf timeOfDayNotAcquired;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedCm") return 3;
            if (name == "unauthorizedSaid") return 4;
            if (name == "permanentAuthorizationFailure") return 8;
            if (name == "timeOfDayNotAcquired") return 11;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthInvalidErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedCm;
        static const ydk::Enum::YLeaf unsolicited;
        static const ydk::Enum::YLeaf invalidKeySequence;
        static const ydk::Enum::YLeaf keyRequestAuthenticationFailure;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedCm") return 3;
            if (name == "unsolicited") return 5;
            if (name == "invalidKeySequence") return 6;
            if (name == "keyRequestAuthenticationFailure") return 7;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsAuthTable::DocsIetfBpi2CmtsAuthEntry::DocsIetfBpi2CmtsAuthBpkmCmCertValid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf validCmChained;
        static const ydk::Enum::YLeaf validCmTrusted;
        static const ydk::Enum::YLeaf invalidCmUntrusted;
        static const ydk::Enum::YLeaf invalidCAUntrusted;
        static const ydk::Enum::YLeaf invalidCmOther;
        static const ydk::Enum::YLeaf invalidCAOther;
        static const ydk::Enum::YLeaf invalidCmRevoked;
        static const ydk::Enum::YLeaf invalidCARevoked;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "validCmChained") return 1;
            if (name == "validCmTrusted") return 2;
            if (name == "invalidCmUntrusted") return 3;
            if (name == "invalidCAUntrusted") return 4;
            if (name == "invalidCmOther") return 5;
            if (name == "invalidCAOther") return 6;
            if (name == "invalidCmRevoked") return 7;
            if (name == "invalidCARevoked") return 8;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsKeyRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf unauthorizedSaid;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "unauthorizedSaid") return 4;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsTEKTable::DocsIetfBpi2CmtsTEKEntry::DocsIetfBpi2CmtsTEKInvalidErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf invalidKeySequence;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "invalidKeySequence") return 6;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsIpMulticastMapTable::DocsIetfBpi2CmtsIpMulticastMapEntry::DocsIetfBpi2CmtsIpMulticastSAMapRejectErrorCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf noAuthForRequestedDSFlow;
        static const ydk::Enum::YLeaf dsFlowNotMappedToSA;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "unknown") return 2;
            if (name == "noAuthForRequestedDSFlow") return 9;
            if (name == "dsFlowNotMappedToSA") return 10;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertTrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf untrusted;

        static int get_enum_value(const std::string & name) {
            if (name == "trusted") return 1;
            if (name == "untrusted") return 2;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsProvisionedCmCertTable::DocsIetfBpi2CmtsProvisionedCmCertEntry::DocsIetfBpi2CmtsProvisionedCmCertSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf configurationFile;
        static const ydk::Enum::YLeaf externalDatabase;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "snmp") return 1;
            if (name == "configurationFile") return 2;
            if (name == "externalDatabase") return 3;
            if (name == "other") return 4;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertTrust : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trusted;
        static const ydk::Enum::YLeaf untrusted;
        static const ydk::Enum::YLeaf chained;
        static const ydk::Enum::YLeaf root;

        static int get_enum_value(const std::string & name) {
            if (name == "trusted") return 1;
            if (name == "untrusted") return 2;
            if (name == "chained") return 3;
            if (name == "root") return 4;
            return -1;
        }
};

class DOCSIETFBPI2MIB::DocsIetfBpi2CmtsCACertTable::DocsIetfBpi2CmtsCACertEntry::DocsIetfBpi2CmtsCACertSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf configurationFile;
        static const ydk::Enum::YLeaf externalDatabase;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf authentInfo;
        static const ydk::Enum::YLeaf compiledIntoCode;

        static int get_enum_value(const std::string & name) {
            if (name == "snmp") return 1;
            if (name == "configurationFile") return 2;
            if (name == "externalDatabase") return 3;
            if (name == "other") return 4;
            if (name == "authentInfo") return 5;
            if (name == "compiledIntoCode") return 6;
            return -1;
        }
};


}
}

#endif /* _DOCS_IETF_BPI2_MIB_ */

