#ifndef _DOCS_SUBMGT3_MIB_
#define _DOCS_SUBMGT3_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_SUBMGT3_MIB {

class DOCSSUBMGT3MIB : public ydk::Entity
{
    public:
        DOCSSUBMGT3MIB();
        ~DOCSSUBMGT3MIB();

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

        class DocsSubmgt3Base; //type: DOCSSUBMGT3MIB::DocsSubmgt3Base
        class DocsSubmgt3CpeCtrlTable; //type: DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable
        class DocsSubmgt3CpeIpTable; //type: DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable
        class DocsSubmgt3GrpTable; //type: DOCSSUBMGT3MIB::DocsSubmgt3GrpTable
        class DocsSubmgt3FilterGrpTable; //type: DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable

        std::shared_ptr<cisco_ios_xe::DOCS_SUBMGT3_MIB::DOCSSUBMGT3MIB::DocsSubmgt3Base> docssubmgt3base;
        std::shared_ptr<cisco_ios_xe::DOCS_SUBMGT3_MIB::DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable> docssubmgt3cpectrltable;
        std::shared_ptr<cisco_ios_xe::DOCS_SUBMGT3_MIB::DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable> docssubmgt3cpeiptable;
        std::shared_ptr<cisco_ios_xe::DOCS_SUBMGT3_MIB::DOCSSUBMGT3MIB::DocsSubmgt3GrpTable> docssubmgt3grptable;
        std::shared_ptr<cisco_ios_xe::DOCS_SUBMGT3_MIB::DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable> docssubmgt3filtergrptable;
        
}; // DOCSSUBMGT3MIB


class DOCSSUBMGT3MIB::DocsSubmgt3Base : public ydk::Entity
{
    public:
        DocsSubmgt3Base();
        ~DocsSubmgt3Base();

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

        ydk::YLeaf docssubmgt3basecpemaxipv4def; //type: uint32
        ydk::YLeaf docssubmgt3basecpemaxipv6prefixdef; //type: uint32
        ydk::YLeaf docssubmgt3basecpeactivedef; //type: boolean
        ydk::YLeaf docssubmgt3basecpelearnabledef; //type: boolean
        ydk::YLeaf docssubmgt3basesubfilterdowndef; //type: uint32
        ydk::YLeaf docssubmgt3basesubfilterupdef; //type: uint32
        ydk::YLeaf docssubmgt3basecmfilterdowndef; //type: uint32
        ydk::YLeaf docssubmgt3basecmfilterupdef; //type: uint32
        ydk::YLeaf docssubmgt3basepsfilterdowndef; //type: uint32
        ydk::YLeaf docssubmgt3basepsfilterupdef; //type: uint32
        ydk::YLeaf docssubmgt3basemtafilterdowndef; //type: uint32
        ydk::YLeaf docssubmgt3basemtafilterupdef; //type: uint32
        ydk::YLeaf docssubmgt3basestbfilterdowndef; //type: uint32
        ydk::YLeaf docssubmgt3basestbfilterupdef; //type: uint32

}; // DOCSSUBMGT3MIB::DocsSubmgt3Base


class DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable : public ydk::Entity
{
    public:
        DocsSubmgt3CpeCtrlTable();
        ~DocsSubmgt3CpeCtrlTable();

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

        class DocsSubmgt3CpeCtrlEntry; //type: DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry

        ydk::YList docssubmgt3cpectrlentry;
        
}; // DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable


class DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry : public ydk::Entity
{
    public:
        DocsSubmgt3CpeCtrlEntry();
        ~DocsSubmgt3CpeCtrlEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::docsif3cmtscmregstatusid)
        ydk::YLeaf docsif3cmtscmregstatusid;
        ydk::YLeaf docssubmgt3cpectrlmaxcpeipv4; //type: uint32
        ydk::YLeaf docssubmgt3cpectrlmaxcpeipv6prefix; //type: uint32
        ydk::YLeaf docssubmgt3cpectrlactive; //type: boolean
        ydk::YLeaf docssubmgt3cpectrllearnable; //type: boolean
        ydk::YLeaf docssubmgt3cpectrlreset; //type: boolean
        ydk::YLeaf docssubmgt3cpectrllastreset; //type: uint32

}; // DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry


class DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable : public ydk::Entity
{
    public:
        DocsSubmgt3CpeIpTable();
        ~DocsSubmgt3CpeIpTable();

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

        class DocsSubmgt3CpeIpEntry; //type: DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry

        ydk::YList docssubmgt3cpeipentry;
        
}; // DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable


class DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry : public ydk::Entity
{
    public:
        DocsSubmgt3CpeIpEntry();
        ~DocsSubmgt3CpeIpEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::docsif3cmtscmregstatusid)
        ydk::YLeaf docsif3cmtscmregstatusid;
        ydk::YLeaf docssubmgt3cpeipid; //type: uint32
        ydk::YLeaf docssubmgt3cpeipaddrtype; //type: InetAddressType
        ydk::YLeaf docssubmgt3cpeipaddr; //type: binary
        ydk::YLeaf docssubmgt3cpeipaddrprefixlen; //type: uint32
        ydk::YLeaf docssubmgt3cpeiplearned; //type: boolean
        ydk::YLeaf docssubmgt3cpeiptype; //type: DocsSubmgt3CpeIpType
        class DocsSubmgt3CpeIpType;

}; // DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry


class DOCSSUBMGT3MIB::DocsSubmgt3GrpTable : public ydk::Entity
{
    public:
        DocsSubmgt3GrpTable();
        ~DocsSubmgt3GrpTable();

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

        class DocsSubmgt3GrpEntry; //type: DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry

        ydk::YList docssubmgt3grpentry;
        
}; // DOCSSUBMGT3MIB::DocsSubmgt3GrpTable


class DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry : public ydk::Entity
{
    public:
        DocsSubmgt3GrpEntry();
        ~DocsSubmgt3GrpEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::docsif3cmtscmregstatusid)
        ydk::YLeaf docsif3cmtscmregstatusid;
        ydk::YLeaf docssubmgt3grpudcgroupids; //type: string
        ydk::YLeaf docssubmgt3grpudcsentinregrsp; //type: boolean
        ydk::YLeaf docssubmgt3grpsubfilterds; //type: uint32
        ydk::YLeaf docssubmgt3grpsubfilterus; //type: uint32
        ydk::YLeaf docssubmgt3grpcmfilterds; //type: uint32
        ydk::YLeaf docssubmgt3grpcmfilterus; //type: uint32
        ydk::YLeaf docssubmgt3grppsfilterds; //type: uint32
        ydk::YLeaf docssubmgt3grppsfilterus; //type: uint32
        ydk::YLeaf docssubmgt3grpmtafilterds; //type: uint32
        ydk::YLeaf docssubmgt3grpmtafilterus; //type: uint32
        ydk::YLeaf docssubmgt3grpstbfilterds; //type: uint32
        ydk::YLeaf docssubmgt3grpstbfilterus; //type: uint32

}; // DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry


class DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable : public ydk::Entity
{
    public:
        DocsSubmgt3FilterGrpTable();
        ~DocsSubmgt3FilterGrpTable();

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

        class DocsSubmgt3FilterGrpEntry; //type: DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry

        ydk::YList docssubmgt3filtergrpentry;
        
}; // DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable


class DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry : public ydk::Entity
{
    public:
        DocsSubmgt3FilterGrpEntry();
        ~DocsSubmgt3FilterGrpEntry();

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

        ydk::YLeaf docssubmgt3filtergrpgrpid; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpruleid; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpaction; //type: DocsSubmgt3FilterGrpAction
        ydk::YLeaf docssubmgt3filtergrppriority; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpiptoslow; //type: binary
        ydk::YLeaf docssubmgt3filtergrpiptoshigh; //type: binary
        ydk::YLeaf docssubmgt3filtergrpiptosmask; //type: binary
        ydk::YLeaf docssubmgt3filtergrpipprotocol; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpinetaddrtype; //type: InetAddressType
        ydk::YLeaf docssubmgt3filtergrpinetsrcaddr; //type: binary
        ydk::YLeaf docssubmgt3filtergrpinetsrcmask; //type: binary
        ydk::YLeaf docssubmgt3filtergrpinetdestaddr; //type: binary
        ydk::YLeaf docssubmgt3filtergrpinetdestmask; //type: binary
        ydk::YLeaf docssubmgt3filtergrpsrcportstart; //type: uint16
        ydk::YLeaf docssubmgt3filtergrpsrcportend; //type: uint16
        ydk::YLeaf docssubmgt3filtergrpdestportstart; //type: uint16
        ydk::YLeaf docssubmgt3filtergrpdestportend; //type: uint16
        ydk::YLeaf docssubmgt3filtergrpdestmacaddr; //type: string
        ydk::YLeaf docssubmgt3filtergrpdestmacmask; //type: string
        ydk::YLeaf docssubmgt3filtergrpsrcmacaddr; //type: string
        ydk::YLeaf docssubmgt3filtergrpenetprotocoltype; //type: DocsSubmgt3FilterGrpEnetProtocolType
        ydk::YLeaf docssubmgt3filtergrpenetprotocol; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpuserprilow; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpuserprihigh; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpvlanid; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpclasspkts; //type: uint64
        ydk::YLeaf docssubmgt3filtergrpflowlabel; //type: uint32
        ydk::YLeaf docssubmgt3filtergrpcminterfacemask; //type: DocsL2vpnIfList
        ydk::YLeaf docssubmgt3filtergrprowstatus; //type: RowStatus
        class DocsSubmgt3FilterGrpAction;
        class DocsSubmgt3FilterGrpEnetProtocolType;

}; // DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry

class DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cpe;
        static const ydk::Enum::YLeaf ps;
        static const ydk::Enum::YLeaf mta;
        static const ydk::Enum::YLeaf stb;
        static const ydk::Enum::YLeaf tea;
        static const ydk::Enum::YLeaf erouter;

};

class DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ethertype;
        static const ydk::Enum::YLeaf dsap;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf all;

};


}
}

#endif /* _DOCS_SUBMGT3_MIB_ */

