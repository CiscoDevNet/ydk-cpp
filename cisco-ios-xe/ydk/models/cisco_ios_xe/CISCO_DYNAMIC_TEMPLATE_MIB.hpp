#ifndef _CISCO_DYNAMIC_TEMPLATE_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_MIB {

class CISCODYNAMICTEMPLATEMIB : public ydk::Entity
{
    public:
        CISCODYNAMICTEMPLATEMIB();
        ~CISCODYNAMICTEMPLATEMIB();

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

        class CdtTemplateTable; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateTable
        class CdtTemplateTargetTable; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable
        class CdtTemplateAssociationTable; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable
        class CdtTemplateUsageTable; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable
        class CdtTemplateCommonTable; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable
        class CdtIfTemplateTable; //type: CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable
        class CdtPppTemplateTable; //type: CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable
        class CdtPppPeerIpAddrPoolTable; //type: CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable
        class CdtEthernetTemplateTable; //type: CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable
        class CdtSrvTemplateTable; //type: CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable

        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable> cdttemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable> cdttemplatetargettable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable> cdttemplateassociationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable> cdttemplateusagetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable> cdttemplatecommontable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable> cdtiftemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable> cdtppptemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable> cdtppppeeripaddrpooltable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable> cdtethernettemplatetable;
        std::shared_ptr<cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable> cdtsrvtemplatetable;
        
}; // CISCODYNAMICTEMPLATEMIB


class CISCODYNAMICTEMPLATEMIB::CdtTemplateTable : public ydk::Entity
{
    public:
        CdtTemplateTable();
        ~CdtTemplateTable();

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

        class CdtTemplateEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry

        ydk::YList cdttemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateTable


class CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry : public ydk::Entity
{
    public:
        CdtTemplateEntry();
        ~CdtTemplateEntry();

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

        ydk::YLeaf cdttemplatename; //type: binary
        ydk::YLeaf cdttemplatestatus; //type: RowStatus
        ydk::YLeaf cdttemplatestorage; //type: StorageType
        ydk::YLeaf cdttemplatetype; //type: DynamicTemplateType
        ydk::YLeaf cdttemplatesrc; //type: CdtTemplateSrc
        ydk::YLeaf cdttemplateusagecount; //type: uint32
        class CdtTemplateSrc;

}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry


class CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable : public ydk::Entity
{
    public:
        CdtTemplateTargetTable();
        ~CdtTemplateTargetTable();

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

        class CdtTemplateTargetEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry

        ydk::YList cdttemplatetargetentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable


class CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry : public ydk::Entity
{
    public:
        CdtTemplateTargetEntry();
        ~CdtTemplateTargetEntry();

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

        ydk::YLeaf cdttemplatetargettype; //type: DynamicTemplateTargetType
        ydk::YLeaf cdttemplatetargetid; //type: binary
        ydk::YLeaf cdttemplatetargetstatus; //type: RowStatus
        ydk::YLeaf cdttemplatetargetstorage; //type: StorageType

}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry


class CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable : public ydk::Entity
{
    public:
        CdtTemplateAssociationTable();
        ~CdtTemplateAssociationTable();

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

        class CdtTemplateAssociationEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry

        ydk::YList cdttemplateassociationentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable


class CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry : public ydk::Entity
{
    public:
        CdtTemplateAssociationEntry();
        ~CdtTemplateAssociationEntry();

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

        ydk::YLeaf cdttemplatetargettype; //type: DynamicTemplateTargetType
        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTargetTable::CdtTemplateTargetEntry::cdttemplatetargetid)
        ydk::YLeaf cdttemplatetargetid;
        ydk::YLeaf cdttemplateassociationname; //type: binary
        ydk::YLeaf cdttemplateassociationprecedence; //type: uint32

}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateAssociationTable::CdtTemplateAssociationEntry


class CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable : public ydk::Entity
{
    public:
        CdtTemplateUsageTable();
        ~CdtTemplateUsageTable();

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

        class CdtTemplateUsageEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry

        ydk::YList cdttemplateusageentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable


class CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry : public ydk::Entity
{
    public:
        CdtTemplateUsageEntry();
        ~CdtTemplateUsageEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdttemplateusagetargettype; //type: DynamicTemplateTargetType
        ydk::YLeaf cdttemplateusagetargetid; //type: binary

}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateUsageTable::CdtTemplateUsageEntry


class CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable : public ydk::Entity
{
    public:
        CdtTemplateCommonTable();
        ~CdtTemplateCommonTable();

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

        class CdtTemplateCommonEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry

        ydk::YList cdttemplatecommonentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable


class CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry : public ydk::Entity
{
    public:
        CdtTemplateCommonEntry();
        ~CdtTemplateCommonEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtcommonvalid; //type: CdtCommonValid
        ydk::YLeaf cdtcommondescr; //type: string
        ydk::YLeaf cdtcommonkeepaliveint; //type: uint32
        ydk::YLeaf cdtcommonkeepaliveretries; //type: uint32
        ydk::YLeaf cdtcommonvrf; //type: binary
        ydk::YLeaf cdtcommonaddrpool; //type: string
        ydk::YLeaf cdtcommonipv4accessgroup; //type: string
        ydk::YLeaf cdtcommonipv4unreachables; //type: boolean
        ydk::YLeaf cdtcommonipv6accessgroup; //type: string
        ydk::YLeaf cdtcommonipv6unreachables; //type: boolean
        ydk::YLeaf cdtcommonsrvsubcontrol; //type: string
        ydk::YLeaf cdtcommonsrvredirect; //type: string
        ydk::YLeaf cdtcommonsrvacct; //type: string
        ydk::YLeaf cdtcommonsrvqos; //type: string
        ydk::YLeaf cdtcommonsrvnetflow; //type: string

}; // CISCODYNAMICTEMPLATEMIB::CdtTemplateCommonTable::CdtTemplateCommonEntry


class CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable : public ydk::Entity
{
    public:
        CdtIfTemplateTable();
        ~CdtIfTemplateTable();

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

        class CdtIfTemplateEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry

        ydk::YList cdtiftemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable


class CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry : public ydk::Entity
{
    public:
        CdtIfTemplateEntry();
        ~CdtIfTemplateEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtifvalid; //type: CdtIfValid
        ydk::YLeaf cdtifmtu; //type: uint32
        ydk::YLeaf cdtifcdpenable; //type: boolean
        ydk::YLeaf cdtifflowmonitor; //type: string
        ydk::YLeaf cdtifipv4unnumbered; //type: int32
        ydk::YLeaf cdtifipv4subenable; //type: boolean
        ydk::YLeaf cdtifipv4mtu; //type: uint32
        ydk::YLeaf cdtifipv4tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv4verifyunirpf; //type: UnicastRpfType
        ydk::YLeaf cdtifipv4verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv4verifyunirpfopts; //type: UnicastRpfOptions
        ydk::YLeaf cdtifipv6enable; //type: boolean
        ydk::YLeaf cdtifipv6subenable; //type: boolean
        ydk::YLeaf cdtifipv6tcpmssadjust; //type: uint32
        ydk::YLeaf cdtifipv6verifyunirpf; //type: UnicastRpfType
        ydk::YLeaf cdtifipv6verifyunirpfacl; //type: string
        ydk::YLeaf cdtifipv6verifyunirpfopts; //type: UnicastRpfOptions
        ydk::YLeaf cdtifipv6ndprefix; //type: string
        ydk::YLeaf cdtifipv6ndprefixlength; //type: uint32
        ydk::YLeaf cdtifipv6ndvalidlife; //type: uint32
        ydk::YLeaf cdtifipv6ndpreferredlife; //type: uint32
        ydk::YLeaf cdtifipv6ndopts; //type: CdtIfIpv6NdOpts
        ydk::YLeaf cdtifipv6nddadattempts; //type: uint32
        ydk::YLeaf cdtifipv6ndnsinterval; //type: uint32
        ydk::YLeaf cdtifipv6ndreachabletime; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalunits; //type: CdtIfIpv6NdRaIntervalUnits
        ydk::YLeaf cdtifipv6ndraintervalmax; //type: uint32
        ydk::YLeaf cdtifipv6ndraintervalmin; //type: uint32
        ydk::YLeaf cdtifipv6ndralife; //type: uint32
        ydk::YLeaf cdtifipv6ndrouterpreference; //type: CdtIfIpv6NdRouterPreference
        class CdtIfIpv6NdRaIntervalUnits;
        class CdtIfIpv6NdRouterPreference;

}; // CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry


class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable : public ydk::Entity
{
    public:
        CdtPppTemplateTable();
        ~CdtPppTemplateTable();

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

        class CdtPppTemplateEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry

        ydk::YList cdtppptemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable


class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry : public ydk::Entity
{
    public:
        CdtPppTemplateEntry();
        ~CdtPppTemplateEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtpppvalid; //type: CdtPppValid
        ydk::YLeaf cdtpppaccounting; //type: boolean
        ydk::YLeaf cdtpppauthentication; //type: CdtPppAuthentication
        ydk::YLeaf cdtpppauthenticationmethods; //type: string
        ydk::YLeaf cdtpppauthorization; //type: boolean
        ydk::YLeaf cdtppploopbackignore; //type: boolean
        ydk::YLeaf cdtpppmaxbadauth; //type: uint32
        ydk::YLeaf cdtpppmaxconfigure; //type: uint32
        ydk::YLeaf cdtpppmaxfailure; //type: uint32
        ydk::YLeaf cdtpppmaxterminate; //type: uint32
        ydk::YLeaf cdtppptimeoutauthentication; //type: uint32
        ydk::YLeaf cdtppptimeoutretry; //type: uint32
        ydk::YLeaf cdtpppchapopts; //type: CdtPppChapOpts
        ydk::YLeaf cdtpppchaphostname; //type: string
        ydk::YLeaf cdtpppchappassword; //type: string
        ydk::YLeaf cdtpppmschapv1opts; //type: CdtPppMsChapV1Opts
        ydk::YLeaf cdtpppmschapv1hostname; //type: string
        ydk::YLeaf cdtpppmschapv1password; //type: string
        ydk::YLeaf cdtpppmschapv2opts; //type: CdtPppMsChapV2Opts
        ydk::YLeaf cdtpppmschapv2hostname; //type: string
        ydk::YLeaf cdtpppmschapv2password; //type: string
        ydk::YLeaf cdtppppapopts; //type: CdtPppPapOpts
        ydk::YLeaf cdtppppapusername; //type: string
        ydk::YLeaf cdtppppappassword; //type: string
        ydk::YLeaf cdtpppeapopts; //type: CdtPppEapOpts
        ydk::YLeaf cdtpppeapidentity; //type: string
        ydk::YLeaf cdtpppeappassword; //type: string
        ydk::YLeaf cdtpppipcpaddroption; //type: CdtPppIpcpAddrOption
        ydk::YLeaf cdtpppipcpdnsoption; //type: CdtPppIpcpDnsOption
        ydk::YLeaf cdtpppipcpdnsprimary; //type: string
        ydk::YLeaf cdtpppipcpdnssecondary; //type: string
        ydk::YLeaf cdtpppipcpwinsoption; //type: CdtPppIpcpWinsOption
        ydk::YLeaf cdtpppipcpwinsprimary; //type: string
        ydk::YLeaf cdtpppipcpwinssecondary; //type: string
        ydk::YLeaf cdtpppipcpmaskoption; //type: CdtPppIpcpMaskOption
        ydk::YLeaf cdtpppipcpmask; //type: string
        ydk::YLeaf cdtppppeerdefipaddropts; //type: CdtPppPeerDefIpAddrOpts
        ydk::YLeaf cdtppppeerdefipaddrsrc; //type: CdtPppPeerDefIpAddrSrc
        ydk::YLeaf cdtppppeerdefipaddr; //type: string
        class CdtPppIpcpAddrOption;
        class CdtPppIpcpDnsOption;
        class CdtPppIpcpWinsOption;
        class CdtPppIpcpMaskOption;
        class CdtPppPeerDefIpAddrSrc;

}; // CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry


class CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable : public ydk::Entity
{
    public:
        CdtPppPeerIpAddrPoolTable();
        ~CdtPppPeerIpAddrPoolTable();

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

        class CdtPppPeerIpAddrPoolEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry

        ydk::YList cdtppppeeripaddrpoolentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable


class CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry : public ydk::Entity
{
    public:
        CdtPppPeerIpAddrPoolEntry();
        ~CdtPppPeerIpAddrPoolEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtppppeeripaddrpoolpriority; //type: uint32
        ydk::YLeaf cdtppppeeripaddrpoolstatus; //type: RowStatus
        ydk::YLeaf cdtppppeeripaddrpoolstorage; //type: StorageType
        ydk::YLeaf cdtppppeeripaddrpoolname; //type: string

}; // CISCODYNAMICTEMPLATEMIB::CdtPppPeerIpAddrPoolTable::CdtPppPeerIpAddrPoolEntry


class CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable : public ydk::Entity
{
    public:
        CdtEthernetTemplateTable();
        ~CdtEthernetTemplateTable();

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

        class CdtEthernetTemplateEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry

        ydk::YList cdtethernettemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable


class CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry : public ydk::Entity
{
    public:
        CdtEthernetTemplateEntry();
        ~CdtEthernetTemplateEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtethernetvalid; //type: CdtEthernetValid
        ydk::YLeaf cdtethernetbridgedomain; //type: string
        ydk::YLeaf cdtethernetpppoeenable; //type: boolean
        ydk::YLeaf cdtethernetipv4pointtopoint; //type: boolean
        ydk::YLeaf cdtethernetmacaddr; //type: string

}; // CISCODYNAMICTEMPLATEMIB::CdtEthernetTemplateTable::CdtEthernetTemplateEntry


class CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable : public ydk::Entity
{
    public:
        CdtSrvTemplateTable();
        ~CdtSrvTemplateTable();

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

        class CdtSrvTemplateEntry; //type: CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry

        ydk::YList cdtsrvtemplateentry;
        
}; // CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable


class CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry : public ydk::Entity
{
    public:
        CdtSrvTemplateEntry();
        ~CdtSrvTemplateEntry();

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

        //type: binary (refers to cisco_ios_xe::CISCO_DYNAMIC_TEMPLATE_MIB::CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::cdttemplatename)
        ydk::YLeaf cdttemplatename;
        ydk::YLeaf cdtsrvvalid; //type: CdtSrvValid
        ydk::YLeaf cdtsrvnetworksrv; //type: CdtSrvNetworkSrv
        ydk::YLeaf cdtsrvvpdngroup; //type: string
        ydk::YLeaf cdtsrvsgsrvgroup; //type: string
        ydk::YLeaf cdtsrvsgsrvtype; //type: CdtSrvSgSrvType
        ydk::YLeaf cdtsrvmulticast; //type: boolean
        class CdtSrvNetworkSrv;
        class CdtSrvSgSrvType;

}; // CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry

class CISCODYNAMICTEMPLATEMIB::CdtTemplateTable::CdtTemplateEntry::CdtTemplateSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf derived;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf aaaUserProfile;
        static const ydk::Enum::YLeaf aaaServiceProfile;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "derived") return 2;
            if (name == "local") return 3;
            if (name == "aaaUserProfile") return 4;
            if (name == "aaaServiceProfile") return 5;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRaIntervalUnits : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf milliseconds;

        static int get_enum_value(const std::string & name) {
            if (name == "seconds") return 1;
            if (name == "milliseconds") return 2;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtIfTemplateTable::CdtIfTemplateEntry::CdtIfIpv6NdRouterPreference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "high") return 1;
            if (name == "medium") return 2;
            if (name == "low") return 3;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpAddrOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf required;
        static const ydk::Enum::YLeaf unique;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "accept") return 2;
            if (name == "required") return 3;
            if (name == "unique") return 4;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpDnsOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "accept") return 2;
            if (name == "request") return 3;
            if (name == "reject") return 4;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpWinsOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "accept") return 2;
            if (name == "request") return 3;
            if (name == "reject") return 4;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppIpcpMaskOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf reject;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "request") return 2;
            if (name == "reject") return 3;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtPppTemplateTable::CdtPppTemplateEntry::CdtPppPeerDefIpAddrSrc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf pool;
        static const ydk::Enum::YLeaf dhcp;

        static int get_enum_value(const std::string & name) {
            if (name == "static") return 1;
            if (name == "pool") return 2;
            if (name == "dhcp") return 3;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvNetworkSrv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf vpdn;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "none") return 2;
            if (name == "local") return 3;
            if (name == "vpdn") return 4;
            return -1;
        }
};

class CISCODYNAMICTEMPLATEMIB::CdtSrvTemplateTable::CdtSrvTemplateEntry::CdtSrvSgSrvType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf primary;
        static const ydk::Enum::YLeaf secondary;

        static int get_enum_value(const std::string & name) {
            if (name == "primary") return 1;
            if (name == "secondary") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_MIB_ */

