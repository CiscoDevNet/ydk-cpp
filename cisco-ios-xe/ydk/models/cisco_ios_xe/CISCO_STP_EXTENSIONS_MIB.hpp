#ifndef _CISCO_STP_EXTENSIONS_MIB_
#define _CISCO_STP_EXTENSIONS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_STP_EXTENSIONS_MIB {

class CiscoStpExtensionsMib : public Entity
{
    public:
        CiscoStpExtensionsMib();
        ~CiscoStpExtensionsMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class CiscoStpExtensionsMib::Stpxuplinkfastobjects : public Entity
{
    public:
        Stpxuplinkfastobjects();
        ~Stpxuplinkfastobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxuplinkfastenabled; //type: boolean
        YLeaf stpxuplinkfasttransitions; //type: uint32
        YLeaf stpxuplinkstationlearninggenrate; //type: int32
        YLeaf stpxuplinkstationlearningframes; //type: uint32
        YLeaf stpxuplinkfastoperenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxuplinkfastobjects


class CiscoStpExtensionsMib::Stpxbackbonefastobjects : public Entity
{
    public:
        Stpxbackbonefastobjects();
        ~Stpxbackbonefastobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxbackbonefastenabled; //type: boolean
        YLeaf stpxbackbonefastininferiorbpdus; //type: uint32
        YLeaf stpxbackbonefastinrlqrequestpdus; //type: uint32
        YLeaf stpxbackbonefastinrlqresponsepdus; //type: uint32
        YLeaf stpxbackbonefastoutrlqrequestpdus; //type: uint32
        YLeaf stpxbackbonefastoutrlqresponsepdus; //type: uint32
        YLeaf stpxbackbonefastoperenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxbackbonefastobjects


class CiscoStpExtensionsMib::Stpxspanningtreeobjects : public Entity
{
    public:
        Stpxspanningtreeobjects();
        ~Stpxspanningtreeobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxspanningtreetype; //type: StpxspanningtreetypeEnum
        YLeaf stpxspanningtreepathcostmode; //type: StpxspanningtreepathcostmodeEnum
        YLeaf stpxextendedsysidadminenabled; //type: boolean
        YLeaf stpxextendedsysidoperenabled; //type: boolean
        YLeaf stpxnotificationenable; //type: Stpxnotificationenable
        YLeaf stpxspanningtreepathcostopermode; //type: StpxspanningtreepathcostopermodeEnum
        class StpxspanningtreetypeEnum;
        class StpxspanningtreepathcostmodeEnum;
        class StpxspanningtreepathcostopermodeEnum;

}; // CiscoStpExtensionsMib::Stpxspanningtreeobjects


class CiscoStpExtensionsMib::Stpxmistpobjects : public Entity
{
    public:
        Stpxmistpobjects();
        ~Stpxmistpobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmistpinstancenumber; //type: int32

}; // CiscoStpExtensionsMib::Stpxmistpobjects


class CiscoStpExtensionsMib::Stpxloopguardobjects : public Entity
{
    public:
        Stpxloopguardobjects();
        ~Stpxloopguardobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxloopguardglobaldefaultmode; //type: StpxloopguardglobaldefaultmodeEnum
        class StpxloopguardglobaldefaultmodeEnum;

}; // CiscoStpExtensionsMib::Stpxloopguardobjects


class CiscoStpExtensionsMib::Stpxfaststartobjects : public Entity
{
    public:
        Stpxfaststartobjects();
        ~Stpxfaststartobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxfaststartbpduguardenable; //type: boolean
        YLeaf stpxfaststartbpdufilterenable; //type: boolean
        YLeaf stpxfaststartglobaldefaultmode; //type: StpxfaststartglobaldefaultmodeEnum
        class StpxfaststartglobaldefaultmodeEnum;

}; // CiscoStpExtensionsMib::Stpxfaststartobjects


class CiscoStpExtensionsMib::Stpxbpduskewingobjects : public Entity
{
    public:
        Stpxbpduskewingobjects();
        ~Stpxbpduskewingobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxbpduskewingdetectionenable; //type: boolean

}; // CiscoStpExtensionsMib::Stpxbpduskewingobjects


class CiscoStpExtensionsMib::Stpxmstobjects : public Entity
{
    public:
        Stpxmstobjects();
        ~Stpxmstobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmstmaxinstancenumber; //type: int32
        YLeaf stpxmstregionname; //type: string
        YLeaf stpxmstregionrevision; //type: int32
        YLeaf stpxmstregioneditbufferstatus; //type: StpxmstregioneditbufferstatusEnum
        YLeaf stpxmstregioneditbufferoperation; //type: StpxmstregioneditbufferoperationEnum
        YLeaf stpxmstregioneditname; //type: string
        YLeaf stpxmstregioneditrevision; //type: int32
        YLeaf stpxmstmaxhopcount; //type: int32
        class StpxmstregioneditbufferstatusEnum;
        class StpxmstregioneditbufferoperationEnum;

}; // CiscoStpExtensionsMib::Stpxmstobjects


class CiscoStpExtensionsMib::Stpxrstpobjects : public Entity
{
    public:
        Stpxrstpobjects();
        ~Stpxrstpobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrstptransmitholdcount; //type: uint32

}; // CiscoStpExtensionsMib::Stpxrstpobjects


class CiscoStpExtensionsMib::Stpxsmstobjects : public Entity
{
    public:
        Stpxsmstobjects();
        ~Stpxsmstobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxsmstmaxinstances; //type: uint32
        YLeaf stpxsmstmaxinstanceid; //type: uint32
        YLeaf stpxsmstregionrevision; //type: uint32
        YLeaf stpxsmstregioneditrevision; //type: uint32
        YLeaf stpxsmstmaxhopcount; //type: uint32
        YLeaf stpxsmstconfigdigest; //type: string
        YLeaf stpxsmstconfigprestandarddigest; //type: string

}; // CiscoStpExtensionsMib::Stpxsmstobjects


class CiscoStpExtensionsMib::Stpxpvstvlantable : public Entity
{
    public:
        Stpxpvstvlantable();
        ~Stpxpvstvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxpvstvlanentry; //type: CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry> > stpxpvstvlanentry;
        
}; // CiscoStpExtensionsMib::Stpxpvstvlantable


class CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry : public Entity
{
    public:
        Stpxpvstvlanentry();
        ~Stpxpvstvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxpvstvlanindex; //type: int32
        YLeaf stpxpvstvlanenable; //type: StpxpvstvlanenableEnum
        class StpxpvstvlanenableEnum;

}; // CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry


class CiscoStpExtensionsMib::Stpxinconsistencytable : public Entity
{
    public:
        Stpxinconsistencytable();
        ~Stpxinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry> > stpxinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxinconsistencytable


class CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry : public Entity
{
    public:
        Stpxinconsistencyentry();
        ~Stpxinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxvlanindex; //type: int32
        YLeaf stpxportindex; //type: int32
        YLeaf stpxinconsistentstate; //type: Stpxinconsistentstate

}; // CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry


class CiscoStpExtensionsMib::Stpxrootguardconfigtable : public Entity
{
    public:
        Stpxrootguardconfigtable();
        ~Stpxrootguardconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxrootguardconfigentry; //type: CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry> > stpxrootguardconfigentry;
        
}; // CiscoStpExtensionsMib::Stpxrootguardconfigtable


class CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry : public Entity
{
    public:
        Stpxrootguardconfigentry();
        ~Stpxrootguardconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrootguardconfigportindex; //type: int32
        YLeaf stpxrootguardconfigenabled; //type: boolean

}; // CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry


class CiscoStpExtensionsMib::Stpxrootinconsistencytable : public Entity
{
    public:
        Stpxrootinconsistencytable();
        ~Stpxrootinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxrootinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry> > stpxrootinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxrootinconsistencytable


class CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry : public Entity
{
    public:
        Stpxrootinconsistencyentry();
        ~Stpxrootinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrootinconsistencyindex; //type: int32
        YLeaf stpxrootinconsistencyportindex; //type: int32
        YLeaf stpxrootinconsistencystate; //type: boolean

}; // CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry


class CiscoStpExtensionsMib::Stpxmistpinstancetable : public Entity
{
    public:
        Stpxmistpinstancetable();
        ~Stpxmistpinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxmistpinstanceentry; //type: CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry> > stpxmistpinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxmistpinstancetable


class CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry : public Entity
{
    public:
        Stpxmistpinstanceentry();
        ~Stpxmistpinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmistpinstanceindex; //type: int32
        YLeaf stpxmistpinstanceenable; //type: boolean
        YLeaf stpxmistpinstancevlansmapped; //type: binary
        YLeaf stpxmistpinstancevlansmapped2k; //type: binary
        YLeaf stpxmistpinstancevlansmapped3k; //type: binary
        YLeaf stpxmistpinstancevlansmapped4k; //type: binary

}; // CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry


class CiscoStpExtensionsMib::Stpxloopguardconfigtable : public Entity
{
    public:
        Stpxloopguardconfigtable();
        ~Stpxloopguardconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxloopguardconfigentry; //type: CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry> > stpxloopguardconfigentry;
        
}; // CiscoStpExtensionsMib::Stpxloopguardconfigtable


class CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry : public Entity
{
    public:
        Stpxloopguardconfigentry();
        ~Stpxloopguardconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxloopguardconfigportindex; //type: int32
        YLeaf stpxloopguardconfigenabled; //type: boolean
        YLeaf stpxloopguardconfigmode; //type: StpxloopguardconfigmodeEnum
        class StpxloopguardconfigmodeEnum;

}; // CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry


class CiscoStpExtensionsMib::Stpxloopinconsistencytable : public Entity
{
    public:
        Stpxloopinconsistencytable();
        ~Stpxloopinconsistencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxloopinconsistencyentry; //type: CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry> > stpxloopinconsistencyentry;
        
}; // CiscoStpExtensionsMib::Stpxloopinconsistencytable


class CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry : public Entity
{
    public:
        Stpxloopinconsistencyentry();
        ~Stpxloopinconsistencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxloopinconsistencyindex; //type: int32
        YLeaf stpxloopinconsistencyportindex; //type: int32
        YLeaf stpxloopinconsistencystate; //type: boolean

}; // CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry


class CiscoStpExtensionsMib::Stpxfaststartporttable : public Entity
{
    public:
        Stpxfaststartporttable();
        ~Stpxfaststartporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxfaststartportentry; //type: CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry> > stpxfaststartportentry;
        
}; // CiscoStpExtensionsMib::Stpxfaststartporttable


class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry : public Entity
{
    public:
        Stpxfaststartportentry();
        ~Stpxfaststartportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxfaststartportindex; //type: int32
        YLeaf stpxfaststartportenable; //type: boolean
        YLeaf stpxfaststartportmode; //type: StpxfaststartportmodeEnum
        YLeaf stpxfaststartportbpduguardmode; //type: StpxfaststartportbpduguardmodeEnum
        YLeaf stpxfaststartportbpdufiltermode; //type: StpxfaststartportbpdufiltermodeEnum
        class StpxfaststartportmodeEnum;
        class StpxfaststartportbpduguardmodeEnum;
        class StpxfaststartportbpdufiltermodeEnum;

}; // CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry


class CiscoStpExtensionsMib::Stpxfaststartopermodetable : public Entity
{
    public:
        Stpxfaststartopermodetable();
        ~Stpxfaststartopermodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxfaststartopermodeentry; //type: CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry> > stpxfaststartopermodeentry;
        
}; // CiscoStpExtensionsMib::Stpxfaststartopermodetable


class CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry : public Entity
{
    public:
        Stpxfaststartopermodeentry();
        ~Stpxfaststartopermodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxfaststartopermodeinstindex; //type: int32
        YLeaf stpxfaststartopermodeportindex; //type: int32
        YLeaf stpxfaststartopermode; //type: StpxfaststartopermodeEnum
        class StpxfaststartopermodeEnum;

}; // CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry


class CiscoStpExtensionsMib::Stpxbpduskewingtable : public Entity
{
    public:
        Stpxbpduskewingtable();
        ~Stpxbpduskewingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxbpduskewingentry; //type: CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry> > stpxbpduskewingentry;
        
}; // CiscoStpExtensionsMib::Stpxbpduskewingtable


class CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry : public Entity
{
    public:
        Stpxbpduskewingentry();
        ~Stpxbpduskewingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxbpduskewinginstanceindex; //type: int32
        YLeaf stpxbpduskewingportindex; //type: int32
        YLeaf stpxbpduskewinglastskewduration; //type: uint32
        YLeaf stpxbpduskewingworstskewduration; //type: uint32
        YLeaf stpxbpduskewingworstskewtime; //type: uint32

}; // CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry


class CiscoStpExtensionsMib::Stpxmstinstancetable : public Entity
{
    public:
        Stpxmstinstancetable();
        ~Stpxmstinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxmstinstanceentry; //type: CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry> > stpxmstinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxmstinstancetable


class CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry : public Entity
{
    public:
        Stpxmstinstanceentry();
        ~Stpxmstinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmstinstanceindex; //type: int32
        YLeaf stpxmstinstancevlansmapped; //type: binary
        YLeaf stpxmstinstancevlansmapped2k; //type: binary
        YLeaf stpxmstinstancevlansmapped3k; //type: binary
        YLeaf stpxmstinstancevlansmapped4k; //type: binary
        YLeaf stpxmstinstanceremaininghopcount; //type: int32

}; // CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry


class CiscoStpExtensionsMib::Stpxmstinstanceedittable : public Entity
{
    public:
        Stpxmstinstanceedittable();
        ~Stpxmstinstanceedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxmstinstanceeditentry; //type: CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry> > stpxmstinstanceeditentry;
        
}; // CiscoStpExtensionsMib::Stpxmstinstanceedittable


class CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry : public Entity
{
    public:
        Stpxmstinstanceeditentry();
        ~Stpxmstinstanceeditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmstinstanceeditindex; //type: int32
        YLeaf stpxmstinstanceeditvlansmap; //type: binary
        YLeaf stpxmstinstanceeditvlansmap2k; //type: binary
        YLeaf stpxmstinstanceeditvlansmap3k; //type: binary
        YLeaf stpxmstinstanceeditvlansmap4k; //type: binary

}; // CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry


class CiscoStpExtensionsMib::Stpxmstporttable : public Entity
{
    public:
        Stpxmstporttable();
        ~Stpxmstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxmstportentry; //type: CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry> > stpxmstportentry;
        
}; // CiscoStpExtensionsMib::Stpxmstporttable


class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry : public Entity
{
    public:
        Stpxmstportentry();
        ~Stpxmstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmstportindex; //type: int32
        YLeaf stpxmstportadminlinktype; //type: StpxmstportadminlinktypeEnum
        YLeaf stpxmstportoperlinktype; //type: StpxmstportoperlinktypeEnum
        YLeaf stpxmstportprotocolmigration; //type: boolean
        YLeaf stpxmstportstatus; //type: Stpxmstportstatus
        class StpxmstportadminlinktypeEnum;
        class StpxmstportoperlinktypeEnum;

}; // CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry


class CiscoStpExtensionsMib::Stpxmstportroletable : public Entity
{
    public:
        Stpxmstportroletable();
        ~Stpxmstportroletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxmstportroleentry; //type: CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry> > stpxmstportroleentry;
        
}; // CiscoStpExtensionsMib::Stpxmstportroletable


class CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry : public Entity
{
    public:
        Stpxmstportroleentry();
        ~Stpxmstportroleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxmstportroleinstanceindex; //type: int32
        YLeaf stpxmstportroleportindex; //type: int32
        YLeaf stpxmstportrolevalue; //type: StpxmstportrolevalueEnum
        class StpxmstportrolevalueEnum;

}; // CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry


class CiscoStpExtensionsMib::Stpxrstpporttable : public Entity
{
    public:
        Stpxrstpporttable();
        ~Stpxrstpporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxrstpportentry; //type: CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry> > stpxrstpportentry;
        
}; // CiscoStpExtensionsMib::Stpxrstpporttable


class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry : public Entity
{
    public:
        Stpxrstpportentry();
        ~Stpxrstpportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrstpportindex; //type: int32
        YLeaf stpxrstpportadminlinktype; //type: StpxrstpportadminlinktypeEnum
        YLeaf stpxrstpportoperlinktype; //type: StpxrstpportoperlinktypeEnum
        YLeaf stpxrstpportprotocolmigration; //type: boolean
        class StpxrstpportadminlinktypeEnum;
        class StpxrstpportoperlinktypeEnum;

}; // CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry


class CiscoStpExtensionsMib::Stpxrstpportroletable : public Entity
{
    public:
        Stpxrstpportroletable();
        ~Stpxrstpportroletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxrstpportroleentry; //type: CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry> > stpxrstpportroleentry;
        
}; // CiscoStpExtensionsMib::Stpxrstpportroletable


class CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry : public Entity
{
    public:
        Stpxrstpportroleentry();
        ~Stpxrstpportroleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrstpportroleinstanceindex; //type: int32
        YLeaf stpxrstpportroleportindex; //type: int32
        YLeaf stpxrstpportrolevalue; //type: StpxrstpportrolevalueEnum
        class StpxrstpportrolevalueEnum;

}; // CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry


class CiscoStpExtensionsMib::Stpxrpvstporttable : public Entity
{
    public:
        Stpxrpvstporttable();
        ~Stpxrpvstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxrpvstportentry; //type: CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry> > stpxrpvstportentry;
        
}; // CiscoStpExtensionsMib::Stpxrpvstporttable


class CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry : public Entity
{
    public:
        Stpxrpvstportentry();
        ~Stpxrpvstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxrpvstportvlanindex; //type: int32
        YLeaf stpxrpvstportindex; //type: int32
        YLeaf stpxrpvstportstatus; //type: Stpxrpvstportstatus

}; // CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry


class CiscoStpExtensionsMib::Stpxsmstinstancetable : public Entity
{
    public:
        Stpxsmstinstancetable();
        ~Stpxsmstinstancetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxsmstinstanceentry; //type: CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry> > stpxsmstinstanceentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstinstancetable


class CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry : public Entity
{
    public:
        Stpxsmstinstanceentry();
        ~Stpxsmstinstanceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxsmstinstanceindex; //type: uint32
        YLeaf stpxsmstinstancevlansmapped1k2k; //type: binary
        YLeaf stpxsmstinstancevlansmapped3k4k; //type: binary
        YLeaf stpxsmstinstanceremaininghopcount; //type: int32
        YLeaf stpxsmstinstancecistregionalroot; //type: binary
        YLeaf stpxsmstinstancecistintrootcost; //type: uint32

}; // CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry


class CiscoStpExtensionsMib::Stpxsmstinstanceedittable : public Entity
{
    public:
        Stpxsmstinstanceedittable();
        ~Stpxsmstinstanceedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxsmstinstanceeditentry; //type: CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry> > stpxsmstinstanceeditentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstinstanceedittable


class CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry : public Entity
{
    public:
        Stpxsmstinstanceeditentry();
        ~Stpxsmstinstanceeditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxsmstinstanceeditindex; //type: uint32
        YLeaf stpxsmstinstanceeditvlansmap1k2k; //type: binary
        YLeaf stpxsmstinstanceeditvlansmap3k4k; //type: binary
        YLeaf stpxsmstinstanceeditrowstatus; //type: RowstatusEnum

}; // CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry


class CiscoStpExtensionsMib::Stpxsmstporttable : public Entity
{
    public:
        Stpxsmstporttable();
        ~Stpxsmstporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Stpxsmstportentry; //type: CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry

        std::vector<std::shared_ptr<CISCO_STP_EXTENSIONS_MIB::CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry> > stpxsmstportentry;
        
}; // CiscoStpExtensionsMib::Stpxsmstporttable


class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry : public Entity
{
    public:
        Stpxsmstportentry();
        ~Stpxsmstportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stpxsmstportindex; //type: int32
        YLeaf stpxsmstportstatus; //type: Stpxsmstportstatus
        YLeaf stpxsmstportadminhellotime; //type: uint32
        YLeaf stpxsmstportconfigedhellotime; //type: uint32
        YLeaf stpxsmstportoperhellotime; //type: int32
        YLeaf stpxsmstportadminmstmode; //type: StpxsmstportadminmstmodeEnum
        YLeaf stpxsmstportopermstmode; //type: StpxsmstportopermstmodeEnum
        class StpxsmstportadminmstmodeEnum;
        class StpxsmstportopermstmodeEnum;

}; // CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pvstPlus;
        static const Enum::YLeaf mistp;
        static const Enum::YLeaf mistpPvstPlus;
        static const Enum::YLeaf mst;
        static const Enum::YLeaf rapidPvstPlus;

};

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf short;
        static const Enum::YLeaf long_;

};

class CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostopermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf short;
        static const Enum::YLeaf long_;

};

class CiscoStpExtensionsMib::Stpxloopguardobjects::StpxloopguardglobaldefaultmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class CiscoStpExtensionsMib::Stpxfaststartobjects::StpxfaststartglobaldefaultmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf released;
        static const Enum::YLeaf acquiredBySnmp;
        static const Enum::YLeaf acquiredByNonSnmp;

};

class CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf acquire;
        static const Enum::YLeaf releaseWithForce;
        static const Enum::YLeaf commit;
        static const Enum::YLeaf rollBack;

};

class CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::StpxpvstvlanenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf notApplicable;

};

class CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::StpxloopguardconfigmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enableForTrunk;
        static const Enum::YLeaf default_;
        static const Enum::YLeaf network;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpduguardmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpdufiltermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;
        static const Enum::YLeaf default_;

};

class CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::StpxfaststartopermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportadminlinktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf shared;
        static const Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportoperlinktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf shared;
        static const Enum::YLeaf other;

};

class CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf root;
        static const Enum::YLeaf designated;
        static const Enum::YLeaf alternate;
        static const Enum::YLeaf backUp;
        static const Enum::YLeaf boundary;
        static const Enum::YLeaf master;

};

class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportadminlinktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf shared;
        static const Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportoperlinktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf pointToPoint;
        static const Enum::YLeaf shared;
        static const Enum::YLeaf other;

};

class CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf root;
        static const Enum::YLeaf designated;
        static const Enum::YLeaf alternate;
        static const Enum::YLeaf backUp;
        static const Enum::YLeaf boundary;
        static const Enum::YLeaf master;

};

class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportadminmstmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf preStandard;
        static const Enum::YLeaf auto_;

};

class CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportopermstmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf preStandard;
        static const Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_STP_EXTENSIONS_MIB_ */

