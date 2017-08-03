#ifndef _CISCO_STP_EXTENSIONS_MIB_
#define _CISCO_STP_EXTENSIONS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_STP_EXTENSIONS_MIB {

class CiscoStpExtensionsMib : public ydk::Entity
{
    public:
        CiscoStpExtensionsMib();
        ~CiscoStpExtensionsMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Stpxuplinkfastobjects; //type: CiscoStpExtensionsMib::Stpxuplinkfastobjects
        class Stpxbackbonefastobjects; //type: CiscoStpExtensionsMib::Stpxbackbonefastobjects
        class Stpxspanningtreeobjects; //type: CiscoStpExtensionsMib::Stpxspanningtreeobjects
        class Stpxmistpobjects; //type: CiscoStpExtensionsMib::Stpxmistpobjects
        class Stpxloopguardobjects; //type: CiscoStpExtensionsMib::Stpxloopguardobjects
        class Stpxfaststartobjects; //type: CiscoStpExtensionsMib::Stpxfaststartobjects
        class Stpxbpduskewingobjects; //type: CiscoStpExtensionsMib::Stpxbpduskewingobjects
        class Stpxmstobjects; //type: CiscoStpExtensionsMib::Stpxmstobjects
        class Stpxrstpobjects; //type: CiscoStpExtensionsMib::Stpxrstpobjects
        class Stpxsmstobjects; //type: CiscoStpExtensionsMib::Stpxsmstobjects
        class Stpxpvstvlantable; //type: CiscoStpExtensionsMib::Stpxpvstvlantable
        class Stpxinconsistencytable; //type: CiscoStpExtensionsMib::Stpxinconsistencytable
        class Stpxrootguardconfigtable; //type: CiscoStpExtensionsMib::Stpxrootguardconfigtable
        class Stpxrootinconsistencytable; //type: CiscoStpExtensionsMib::Stpxrootinconsistencytable
        class Stpxmistpinstancetable; //type: CiscoStpExtensionsMib::Stpxmistpinstancetable
        class Stpxloopguardconfigtable; //type: CiscoStpExtensionsMib::Stpxloopguardconfigtable
        class Stpxloopinconsistencytable; //type: CiscoStpExtensionsMib::Stpxloopinconsistencytable
        class Stpxfaststartporttable; //type: CiscoStpExtensionsMib::Stpxfaststartporttable
        class Stpxfaststartopermodetable; //type: CiscoStpExtensionsMib::Stpxfaststartopermodetable
        class Stpxbpduskewingtable; //type: CiscoStpExtensionsMib::Stpxbpduskewingtable
        class Stpxmstinstancetable; //type: CiscoStpExtensionsMib::Stpxmstinstancetable
        class Stpxmstinstanceedittable; //type: CiscoStpExtensionsMib::Stpxmstinstanceedittable
        class Stpxmstporttable; //type: CiscoStpExtensionsMib::Stpxmstporttable
        class Stpxmstportroletable; //type: CiscoStpExtensionsMib::Stpxmstportroletable
        class Stpxrstpporttable; //type: CiscoStpExtensionsMib::Stpxrstpporttable
        class Stpxrstpportroletable; //type: CiscoStpExtensionsMib::Stpxrstpportroletable
        class Stpxrpvstporttable; //type: CiscoStpExtensionsMib::Stpxrpvstporttable
        class Stpxsmstinstancetable; //type: CiscoStpExtensionsMib::Stpxsmstinstancetable
        class Stpxsmstinstanceedittable; //type: CiscoStpExtensionsMib::Stpxsmstinstanceedittable
        class Stpxsmstporttable; //type: CiscoStpExtensionsMib::Stpxsmstporttable

        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxbackbonefastobjects> stpxbackbonefastobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxbpduskewingobjects> stpxbpduskewingobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxbpduskewingtable> stpxbpduskewingtable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartobjects> stpxfaststartobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartopermodetable> stpxfaststartopermodetable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartporttable> stpxfaststartporttable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxinconsistencytable> stpxinconsistencytable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopguardconfigtable> stpxloopguardconfigtable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopguardobjects> stpxloopguardobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopinconsistencytable> stpxloopinconsistencytable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmistpinstancetable> stpxmistpinstancetable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmistpobjects> stpxmistpobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstanceedittable> stpxmstinstanceedittable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstancetable> stpxmstinstancetable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstobjects> stpxmstobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstportroletable> stpxmstportroletable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstporttable> stpxmstporttable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxpvstvlantable> stpxpvstvlantable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootguardconfigtable> stpxrootguardconfigtable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootinconsistencytable> stpxrootinconsistencytable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrpvstporttable> stpxrpvstporttable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpobjects> stpxrstpobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpportroletable> stpxrstpportroletable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpporttable> stpxrstpporttable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstanceedittable> stpxsmstinstanceedittable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstancetable> stpxsmstinstancetable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstobjects> stpxsmstobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstporttable> stpxsmstporttable;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxspanningtreeobjects> stpxspanningtreeobjects;
        std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxuplinkfastobjects> stpxuplinkfastobjects;
        
}; // CiscoStpExtensionsMib


class CiscoStpExtensionsMib::Stpxuplinkfastobjects : public ydk::Entity
{
    public:
        Stpxuplinkfastobjects();
        ~Stpxuplinkfastobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxuplinkfastenabled; //type: boolean
        ydk::YLeaf stpxuplinkfasttransitions; //type: uint32
        ydk::YLeaf stpxuplinkstationlearninggenrate; //type: int32
        ydk::YLeaf stpxuplinkstationlearningframes; //type: uint32
        ydk::YLeaf stpxuplinkfastoperenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxuplinkfastobjects


class CiscoStpExtensionsMib::Stpxbackbonefastobjects : public ydk::Entity
{
    public:
        Stpxbackbonefastobjects();
        ~Stpxbackbonefastobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxbackbonefastenabled; //type: boolean
        ydk::YLeaf stpxbackbonefastininferiorbpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoperenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxbackbonefastobjects


class CiscoStpExtensionsMib::Stpxspanningtreeobjects : public ydk::Entity
{
    public:
        Stpxspanningtreeobjects();
        ~Stpxspanningtreeobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxspanningtreetype; //type: Stpxspanningtreetype
        ydk::YLeaf stpxspanningtreepathcostmode; //type: Stpxspanningtreepathcostmode
        ydk::YLeaf stpxextendedsysidadminenabled; //type: boolean
        ydk::YLeaf stpxextendedsysidoperenabled; //type: boolean
        ydk::YLeaf stpxnotificationenable; //type: Stpxnotificationenable
        ydk::YLeaf stpxspanningtreepathcostopermode; //type: Stpxspanningtreepathcostopermode
        class Stpxspanningtreetype;
        class Stpxspanningtreepathcostmode;
        class Stpxspanningtreepathcostopermode;

}; // CiscoStpExtensionsMib::Stpxspanningtreeobjects


class CiscoStpExtensionsMib::Stpxmistpobjects : public ydk::Entity
{
    public:
        Stpxmistpobjects();
        ~Stpxmistpobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmistpinstancenumber; //type: int32

}; // CiscoStpExtensionsMib::Stpxmistpobjects


class CiscoStpExtensionsMib::Stpxloopguardobjects : public ydk::Entity
{
    public:
        Stpxloopguardobjects();
        ~Stpxloopguardobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxloopguardglobaldefaultmode; //type: Stpxloopguardglobaldefaultmode
        class Stpxloopguardglobaldefaultmode;

}; // CiscoStpExtensionsMib::Stpxloopguardobjects


class CiscoStpExtensionsMib::Stpxfaststartobjects : public ydk::Entity
{
    public:
        Stpxfaststartobjects();
        ~Stpxfaststartobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxfaststartbpduguardenable; //type: boolean
        ydk::YLeaf stpxfaststartbpdufilterenable; //type: boolean
        ydk::YLeaf stpxfaststartglobaldefaultmode; //type: Stpxfaststartglobaldefaultmode
        class Stpxfaststartglobaldefaultmode;

}; // CiscoStpExtensionsMib::Stpxfaststartobjects


class CiscoStpExtensionsMib::Stpxbpduskewingobjects : public ydk::Entity
{
    public:
        Stpxbpduskewingobjects();
        ~Stpxbpduskewingobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxbpduskewingdetectionenable; //type: boolean

}; // CiscoStpExtensionsMib::Stpxbpduskewingobjects


class CiscoStpExtensionsMib::Stpxmstobjects : public ydk::Entity
{
    public:
        Stpxmstobjects();
        ~Stpxmstobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmstmaxinstancenumber; //type: int32
        ydk::YLeaf stpxmstregionname; //type: string
        ydk::YLeaf stpxmstregionrevision; //type: int32
        ydk::YLeaf stpxmstregioneditbufferstatus; //type: Stpxmstregioneditbufferstatus
        ydk::YLeaf stpxmstregioneditbufferoperation; //type: Stpxmstregioneditbufferoperation
        ydk::YLeaf stpxmstregioneditname; //type: string
        ydk::YLeaf stpxmstregioneditrevision; //type: int32
        ydk::YLeaf stpxmstmaxhopcount; //type: int32
        class Stpxmstregioneditbufferstatus;
        class Stpxmstregioneditbufferoperation;

}; // CiscoStpExtensionsMib::Stpxmstobjects


class CiscoStpExtensionsMib::Stpxrstpobjects : public ydk::Entity
{
    public:
        Stpxrstpobjects();
        ~Stpxrstpobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrstptransmitholdcount; //type: uint32

}; // CiscoStpExtensionsMib::Stpxrstpobjects


class CiscoStpExtensionsMib::Stpxsmstobjects : public ydk::Entity
{
    public:
        Stpxsmstobjects();
        ~Stpxsmstobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxsmstmaxinstances; //type: uint32
        ydk::YLeaf stpxsmstmaxinstanceid; //type: uint32
        ydk::YLeaf stpxsmstregionrevision; //type: uint32
        ydk::YLeaf stpxsmstregioneditrevision; //type: uint32
        ydk::YLeaf stpxsmstmaxhopcount; //type: uint32
        ydk::YLeaf stpxsmstconfigdigest; //type: string
        ydk::YLeaf stpxsmstconfigprestandarddigest; //type: string

}; // CiscoStpExtensionsMib::Stpxsmstobjects


class CiscoStpExtensionsMib::Stpxpvstvlantable : public ydk::Entity
{
    public:
        Stpxpvstvlantable();
        ~Stpxpvstvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxpvstvlanentry; //type: CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry> > stpxpvstvlanentry;
        
}; // CiscoStpExtensionsMib::Stpxpvstvlantable


class CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry : public ydk::Entity
{
    public:
        Stpxpvstvlanentry();
        ~Stpxpvstvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxpvstvlanindex; //type: int32
        ydk::YLeaf stpxpvstvlanenable; //type: Stpxpvstvlanenable
        class Stpxpvstvlanenable;

}; // CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry


class CiscoStpExtensionsMib::Stpxinconsistencytable : public ydk::Entity
{
    public:
        Stpxinconsistencytable();
        ~Stpxinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry> > stpxinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxinconsistencytable


class CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry : public ydk::Entity
{
    public:
        Stpxinconsistencyentry();
        ~Stpxinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxvlanindex; //type: int32
        ydk::YLeaf stpxportindex; //type: int32
        ydk::YLeaf stpxinconsistentstate; //type: Stpxinconsistentstate

}; // CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry


class CiscoStpExtensionsMib::Stpxrootguardconfigtable : public ydk::Entity
{
    public:
        Stpxrootguardconfigtable();
        ~Stpxrootguardconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxrootguardconfigentry; //type: CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry> > stpxrootguardconfigentry;
        
}; // CiscoStpExtensionsMib::Stpxrootguardconfigtable


class CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry : public ydk::Entity
{
    public:
        Stpxrootguardconfigentry();
        ~Stpxrootguardconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrootguardconfigportindex; //type: int32
        ydk::YLeaf stpxrootguardconfigenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry


class CiscoStpExtensionsMib::Stpxrootinconsistencytable : public ydk::Entity
{
    public:
        Stpxrootinconsistencytable();
        ~Stpxrootinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxrootinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry> > stpxrootinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxrootinconsistencytable


class CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry : public ydk::Entity
{
    public:
        Stpxrootinconsistencyentry();
        ~Stpxrootinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrootinconsistencyindex; //type: int32
        ydk::YLeaf stpxrootinconsistencyportindex; //type: int32
        ydk::YLeaf stpxrootinconsistencystate; //type: boolean

}; // CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry


class CiscoStpExtensionsMib::Stpxmistpinstancetable : public ydk::Entity
{
    public:
        Stpxmistpinstancetable();
        ~Stpxmistpinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxmistpinstanceentry; //type: CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry> > stpxmistpinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxmistpinstancetable


class CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry : public ydk::Entity
{
    public:
        Stpxmistpinstanceentry();
        ~Stpxmistpinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmistpinstanceindex; //type: int32
        ydk::YLeaf stpxmistpinstanceenable; //type: boolean
        ydk::YLeaf stpxmistpinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped4k; //type: binary

}; // CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry


class CiscoStpExtensionsMib::Stpxloopguardconfigtable : public ydk::Entity
{
    public:
        Stpxloopguardconfigtable();
        ~Stpxloopguardconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxloopguardconfigentry; //type: CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry> > stpxloopguardconfigentry;
        
}; // CiscoStpExtensionsMib::Stpxloopguardconfigtable


class CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry : public ydk::Entity
{
    public:
        Stpxloopguardconfigentry();
        ~Stpxloopguardconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxloopguardconfigportindex; //type: int32
        ydk::YLeaf stpxloopguardconfigenabled; //type: boolean
        ydk::YLeaf stpxloopguardconfigmode; //type: Stpxloopguardconfigmode
        class Stpxloopguardconfigmode;

}; // CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry


class CiscoStpExtensionsMib::Stpxloopinconsistencytable : public ydk::Entity
{
    public:
        Stpxloopinconsistencytable();
        ~Stpxloopinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxloopinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry> > stpxloopinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxloopinconsistencytable


class CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry : public ydk::Entity
{
    public:
        Stpxloopinconsistencyentry();
        ~Stpxloopinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxloopinconsistencyindex; //type: int32
        ydk::YLeaf stpxloopinconsistencyportindex; //type: int32
        ydk::YLeaf stpxloopinconsistencystate; //type: boolean

}; // CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry


class CiscoStpExtensionsMib::Stpxfaststartporttable : public ydk::Entity
{
    public:
        Stpxfaststartporttable();
        ~Stpxfaststartporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxfaststartportentry; //type: CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry> > stpxfaststartportentry;
        
}; // CiscoStpExtensionsMib::Stpxfaststartporttable


class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry : public ydk::Entity
{
    public:
        Stpxfaststartportentry();
        ~Stpxfaststartportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxfaststartportindex; //type: int32
        ydk::YLeaf stpxfaststartportenable; //type: boolean
        ydk::YLeaf stpxfaststartportmode; //type: Stpxfaststartportmode
        ydk::YLeaf stpxfaststartportbpduguardmode; //type: Stpxfaststartportbpduguardmode
        ydk::YLeaf stpxfaststartportbpdufiltermode; //type: Stpxfaststartportbpdufiltermode
        class Stpxfaststartportmode;
        class Stpxfaststartportbpduguardmode;
        class Stpxfaststartportbpdufiltermode;

}; // CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry


class CiscoStpExtensionsMib::Stpxfaststartopermodetable : public ydk::Entity
{
    public:
        Stpxfaststartopermodetable();
        ~Stpxfaststartopermodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxfaststartopermodeentry; //type: CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry> > stpxfaststartopermodeentry;
        
}; // CiscoStpExtensionsMib::Stpxfaststartopermodetable


class CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry : public ydk::Entity
{
    public:
        Stpxfaststartopermodeentry();
        ~Stpxfaststartopermodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxfaststartopermodeinstindex; //type: int32
        ydk::YLeaf stpxfaststartopermodeportindex; //type: int32
        ydk::YLeaf stpxfaststartopermode; //type: Stpxfaststartopermode
        class Stpxfaststartopermode;

}; // CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry


class CiscoStpExtensionsMib::Stpxbpduskewingtable : public ydk::Entity
{
    public:
        Stpxbpduskewingtable();
        ~Stpxbpduskewingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxbpduskewingentry; //type: CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry> > stpxbpduskewingentry;
        
}; // CiscoStpExtensionsMib::Stpxbpduskewingtable


class CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry : public ydk::Entity
{
    public:
        Stpxbpduskewingentry();
        ~Stpxbpduskewingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxbpduskewinginstanceindex; //type: int32
        ydk::YLeaf stpxbpduskewingportindex; //type: int32
        ydk::YLeaf stpxbpduskewinglastskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewtime; //type: uint32

}; // CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry


class CiscoStpExtensionsMib::Stpxmstinstancetable : public ydk::Entity
{
    public:
        Stpxmstinstancetable();
        ~Stpxmstinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxmstinstanceentry; //type: CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry> > stpxmstinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxmstinstancetable


class CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry : public ydk::Entity
{
    public:
        Stpxmstinstanceentry();
        ~Stpxmstinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmstinstanceindex; //type: int32
        ydk::YLeaf stpxmstinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped4k; //type: binary
        ydk::YLeaf stpxmstinstanceremaininghopcount; //type: int32

}; // CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry


class CiscoStpExtensionsMib::Stpxmstinstanceedittable : public ydk::Entity
{
    public:
        Stpxmstinstanceedittable();
        ~Stpxmstinstanceedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxmstinstanceeditentry; //type: CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry> > stpxmstinstanceeditentry;
        
}; // CiscoStpExtensionsMib::Stpxmstinstanceedittable


class CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry : public ydk::Entity
{
    public:
        Stpxmstinstanceeditentry();
        ~Stpxmstinstanceeditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmstinstanceeditindex; //type: int32
        ydk::YLeaf stpxmstinstanceeditvlansmap; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap2k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap3k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap4k; //type: binary

}; // CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry


class CiscoStpExtensionsMib::Stpxmstporttable : public ydk::Entity
{
    public:
        Stpxmstporttable();
        ~Stpxmstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxmstportentry; //type: CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry> > stpxmstportentry;
        
}; // CiscoStpExtensionsMib::Stpxmstporttable


class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry : public ydk::Entity
{
    public:
        Stpxmstportentry();
        ~Stpxmstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmstportindex; //type: int32
        ydk::YLeaf stpxmstportadminlinktype; //type: Stpxmstportadminlinktype
        ydk::YLeaf stpxmstportoperlinktype; //type: Stpxmstportoperlinktype
        ydk::YLeaf stpxmstportprotocolmigration; //type: boolean
        ydk::YLeaf stpxmstportstatus; //type: Stpxmstportstatus
        class Stpxmstportadminlinktype;
        class Stpxmstportoperlinktype;

}; // CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry


class CiscoStpExtensionsMib::Stpxmstportroletable : public ydk::Entity
{
    public:
        Stpxmstportroletable();
        ~Stpxmstportroletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxmstportroleentry; //type: CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry> > stpxmstportroleentry;
        
}; // CiscoStpExtensionsMib::Stpxmstportroletable


class CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry : public ydk::Entity
{
    public:
        Stpxmstportroleentry();
        ~Stpxmstportroleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxmstportroleinstanceindex; //type: int32
        ydk::YLeaf stpxmstportroleportindex; //type: int32
        ydk::YLeaf stpxmstportrolevalue; //type: Stpxmstportrolevalue
        class Stpxmstportrolevalue;

}; // CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry


class CiscoStpExtensionsMib::Stpxrstpporttable : public ydk::Entity
{
    public:
        Stpxrstpporttable();
        ~Stpxrstpporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxrstpportentry; //type: CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry> > stpxrstpportentry;
        
}; // CiscoStpExtensionsMib::Stpxrstpporttable


class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry : public ydk::Entity
{
    public:
        Stpxrstpportentry();
        ~Stpxrstpportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrstpportindex; //type: int32
        ydk::YLeaf stpxrstpportadminlinktype; //type: Stpxrstpportadminlinktype
        ydk::YLeaf stpxrstpportoperlinktype; //type: Stpxrstpportoperlinktype
        ydk::YLeaf stpxrstpportprotocolmigration; //type: boolean
        class Stpxrstpportadminlinktype;
        class Stpxrstpportoperlinktype;

}; // CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry


class CiscoStpExtensionsMib::Stpxrstpportroletable : public ydk::Entity
{
    public:
        Stpxrstpportroletable();
        ~Stpxrstpportroletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxrstpportroleentry; //type: CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry> > stpxrstpportroleentry;
        
}; // CiscoStpExtensionsMib::Stpxrstpportroletable


class CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry : public ydk::Entity
{
    public:
        Stpxrstpportroleentry();
        ~Stpxrstpportroleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrstpportroleinstanceindex; //type: int32
        ydk::YLeaf stpxrstpportroleportindex; //type: int32
        ydk::YLeaf stpxrstpportrolevalue; //type: Stpxrstpportrolevalue
        class Stpxrstpportrolevalue;

}; // CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry


class CiscoStpExtensionsMib::Stpxrpvstporttable : public ydk::Entity
{
    public:
        Stpxrpvstporttable();
        ~Stpxrpvstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxrpvstportentry; //type: CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry> > stpxrpvstportentry;
        
}; // CiscoStpExtensionsMib::Stpxrpvstporttable


class CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry : public ydk::Entity
{
    public:
        Stpxrpvstportentry();
        ~Stpxrpvstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxrpvstportvlanindex; //type: int32
        ydk::YLeaf stpxrpvstportindex; //type: int32
        ydk::YLeaf stpxrpvstportstatus; //type: Stpxrpvstportstatus

}; // CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry


class CiscoStpExtensionsMib::Stpxsmstinstancetable : public ydk::Entity
{
    public:
        Stpxsmstinstancetable();
        ~Stpxsmstinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxsmstinstanceentry; //type: CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry> > stpxsmstinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstinstancetable


class CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry : public ydk::Entity
{
    public:
        Stpxsmstinstanceentry();
        ~Stpxsmstinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxsmstinstanceindex; //type: uint32
        ydk::YLeaf stpxsmstinstancevlansmapped1k2k; //type: binary
        ydk::YLeaf stpxsmstinstancevlansmapped3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceremaininghopcount; //type: int32
        ydk::YLeaf stpxsmstinstancecistregionalroot; //type: binary
        ydk::YLeaf stpxsmstinstancecistintrootcost; //type: uint32

}; // CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry


class CiscoStpExtensionsMib::Stpxsmstinstanceedittable : public ydk::Entity
{
    public:
        Stpxsmstinstanceedittable();
        ~Stpxsmstinstanceedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxsmstinstanceeditentry; //type: CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry> > stpxsmstinstanceeditentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstinstanceedittable


class CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry : public ydk::Entity
{
    public:
        Stpxsmstinstanceeditentry();
        ~Stpxsmstinstanceeditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxsmstinstanceeditindex; //type: uint32
        ydk::YLeaf stpxsmstinstanceeditvlansmap1k2k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditvlansmap3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditrowstatus; //type: Rowstatus

}; // CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry


class CiscoStpExtensionsMib::Stpxsmstporttable : public ydk::Entity
{
    public:
        Stpxsmstporttable();
        ~Stpxsmstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Stpxsmstportentry; //type: CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry> > stpxsmstportentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstporttable


class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry : public ydk::Entity
{
    public:
        Stpxsmstportentry();
        ~Stpxsmstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stpxsmstportindex; //type: int32
        ydk::YLeaf stpxsmstportstatus; //type: Stpxsmstportstatus
        ydk::YLeaf stpxsmstportadminhellotime; //type: uint32
        ydk::YLeaf stpxsmstportconfigedhellotime; //type: uint32
        ydk::YLeaf stpxsmstportoperhellotime; //type: int32
        ydk::YLeaf stpxsmstportadminmstmode; //type: Stpxsmstportadminmstmode
        ydk::YLeaf stpxsmstportopermstmode; //type: Stpxsmstportopermstmode
        class Stpxsmstportadminmstmode;
        class Stpxsmstportopermstmode;

}; // CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::Stpxspanningtreetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvstPlus;
        static const ydk::Enum::YLeaf mistp;
        static const ydk::Enum::YLeaf mistpPvstPlus;
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf rapidPvstPlus;

};

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::Stpxspanningtreepathcostmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

};

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::Stpxspanningtreepathcostopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

};

class CiscoStpExtensionsMib::Stpxloopguardobjects::Stpxloopguardglobaldefaultmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CiscoStpExtensionsMib::Stpxfaststartobjects::Stpxfaststartglobaldefaultmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class CiscoStpExtensionsMib::Stpxmstobjects::Stpxmstregioneditbufferstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf released;
        static const ydk::Enum::YLeaf acquiredBySnmp;
        static const ydk::Enum::YLeaf acquiredByNonSnmp;

};

class CiscoStpExtensionsMib::Stpxmstobjects::Stpxmstregioneditbufferoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf acquire;
        static const ydk::Enum::YLeaf releaseWithForce;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf rollBack;

};

class CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf notApplicable;

};

class CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enableForTrunk;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf network;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpduguardmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpdufiltermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::Stpxmstportadminlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::Stpxmstportoperlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

};

class CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

};

class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportadminlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportoperlinktype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

};

class CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

};

class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportadminmstmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportopermstmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_STP_EXTENSIONS_MIB_ */

