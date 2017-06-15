#ifndef _CISCO_VTP_MIB_
#define _CISCO_VTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_VTP_MIB {

class CiscoVtpMib : public Entity
{
    public:
        CiscoVtpMib();
        ~CiscoVtpMib();

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

        class Vtpstatus; //type: CiscoVtpMib::Vtpstatus
        class Internalvlaninfo; //type: CiscoVtpMib::Internalvlaninfo
        class Vlantrunkports; //type: CiscoVtpMib::Vlantrunkports
        class Vlanstatistics; //type: CiscoVtpMib::Vlanstatistics
        class Managementdomaintable; //type: CiscoVtpMib::Managementdomaintable
        class Vtpvlantable; //type: CiscoVtpMib::Vtpvlantable
        class Vtpinternalvlantable; //type: CiscoVtpMib::Vtpinternalvlantable
        class Vtpvlanedittable; //type: CiscoVtpMib::Vtpvlanedittable
        class Vtpvlanlocalshutdowntable; //type: CiscoVtpMib::Vtpvlanlocalshutdowntable
        class Vlantrunkporttable; //type: CiscoVtpMib::Vlantrunkporttable
        class Vtpdiscovertable; //type: CiscoVtpMib::Vtpdiscovertable
        class Vtpdiscoverresulttable; //type: CiscoVtpMib::Vtpdiscoverresulttable
        class Vtpdatabasetable; //type: CiscoVtpMib::Vtpdatabasetable
        class Vtpauthenticationtable; //type: CiscoVtpMib::Vtpauthenticationtable

        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Internalvlaninfo> internalvlaninfo_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable> managementdomaintable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlanstatistics> vlanstatistics_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkports> vlantrunkports_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkporttable> vlantrunkporttable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpauthenticationtable> vtpauthenticationtable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdatabasetable> vtpdatabasetable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscoverresulttable> vtpdiscoverresulttable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscovertable> vtpdiscovertable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpinternalvlantable> vtpinternalvlantable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpstatus> vtpstatus_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanedittable> vtpvlanedittable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanlocalshutdowntable> vtpvlanlocalshutdowntable_;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable> vtpvlantable_;
        
}; // CiscoVtpMib


class CiscoVtpMib::Vtpstatus : public Entity
{
    public:
        Vtpstatus();
        ~Vtpstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vtpversion; //type: VtpversionEnum
        YLeaf vtpmaxvlanstorage; //type: int32
        YLeaf vtpnotificationsenabled; //type: boolean
        YLeaf vtpvlancreatednotifenabled; //type: boolean
        YLeaf vtpvlandeletednotifenabled; //type: boolean
        class VtpversionEnum;

}; // CiscoVtpMib::Vtpstatus


class CiscoVtpMib::Internalvlaninfo : public Entity
{
    public:
        Internalvlaninfo();
        ~Internalvlaninfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vtpinternalvlanallocpolicy; //type: VtpinternalvlanallocpolicyEnum
        class VtpinternalvlanallocpolicyEnum;

}; // CiscoVtpMib::Internalvlaninfo


class CiscoVtpMib::Vlantrunkports : public Entity
{
    public:
        Vlantrunkports();
        ~Vlantrunkports();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlantrunkportsetserialno; //type: int32
        YLeaf vlantrunkportsdot1qtag; //type: boolean

}; // CiscoVtpMib::Vlantrunkports


class CiscoVtpMib::Vlanstatistics : public Entity
{
    public:
        Vlanstatistics();
        ~Vlanstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlanstatsvlans; //type: uint32
        YLeaf vlanstatsextendedvlans; //type: uint32
        YLeaf vlanstatsinternalvlans; //type: uint32
        YLeaf vlanstatsfreevlans; //type: uint32

}; // CiscoVtpMib::Vlanstatistics


class CiscoVtpMib::Managementdomaintable : public Entity
{
    public:
        Managementdomaintable();
        ~Managementdomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Managementdomainentry; //type: CiscoVtpMib::Managementdomaintable::Managementdomainentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry> > managementdomainentry_;
        
}; // CiscoVtpMib::Managementdomaintable


class CiscoVtpMib::Managementdomaintable::Managementdomainentry : public Entity
{
    public:
        Managementdomainentry();
        ~Managementdomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf managementdomainindex; //type: int32
        YLeaf managementdomainname; //type: string
        YLeaf managementdomainlocalmode; //type: ManagementdomainlocalmodeEnum
        YLeaf managementdomainconfigrevnumber; //type: uint32
        YLeaf managementdomainlastupdater; //type: string
        YLeaf managementdomainlastchange; //type: string
        YLeaf managementdomainrowstatus; //type: RowstatusEnum
        YLeaf managementdomaintftpserver; //type: string
        YLeaf managementdomaintftppathname; //type: string
        YLeaf managementdomainpruningstate; //type: ManagementdomainpruningstateEnum
        YLeaf managementdomainversioninuse; //type: ManagementdomainversioninuseEnum
        YLeaf managementdomainpruningstateoper; //type: ManagementdomainpruningstateoperEnum
        YLeaf managementdomainadminsrcif; //type: string
        YLeaf managementdomainsourceonlymode; //type: boolean
        YLeaf managementdomainopersrcif; //type: string
        YLeaf managementdomainconfigfile; //type: string
        YLeaf managementdomainlocalupdatertype; //type: InetaddresstypeEnum
        YLeaf managementdomainlocalupdater; //type: binary
        YLeaf managementdomaindeviceid; //type: string
        YLeaf vtpvlaneditoperation; //type: VtpvlaneditoperationEnum
        YLeaf vtpvlanapplystatus; //type: VtpvlanapplystatusEnum
        YLeaf vtpvlaneditbufferowner; //type: binary
        YLeaf vtpvlaneditconfigrevnumber; //type: uint32
        YLeaf vtpvlaneditmodifiedvlan; //type: int32
        YLeaf vtpinsummaryadverts; //type: uint32
        YLeaf vtpinsubsetadverts; //type: uint32
        YLeaf vtpinadvertrequests; //type: uint32
        YLeaf vtpoutsummaryadverts; //type: uint32
        YLeaf vtpoutsubsetadverts; //type: uint32
        YLeaf vtpoutadvertrequests; //type: uint32
        YLeaf vtpconfigrevnumbererrors; //type: uint32
        YLeaf vtpconfigdigesterrors; //type: uint32
        class ManagementdomainlocalmodeEnum;
        class ManagementdomainpruningstateEnum;
        class ManagementdomainversioninuseEnum;
        class ManagementdomainpruningstateoperEnum;
        class VtpvlaneditoperationEnum;
        class VtpvlanapplystatusEnum;

}; // CiscoVtpMib::Managementdomaintable::Managementdomainentry


class CiscoVtpMib::Vtpvlantable : public Entity
{
    public:
        Vtpvlantable();
        ~Vtpvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpvlanentry; //type: CiscoVtpMib::Vtpvlantable::Vtpvlanentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry> > vtpvlanentry_;
        
}; // CiscoVtpMib::Vtpvlantable


class CiscoVtpMib::Vtpvlantable::Vtpvlanentry : public Entity
{
    public:
        Vtpvlanentry();
        ~Vtpvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpvlanindex; //type: int32
        YLeaf vtpvlanstate; //type: VtpvlanstateEnum
        YLeaf vtpvlantype; //type: VlantypeEnum
        YLeaf vtpvlanname; //type: string
        YLeaf vtpvlanmtu; //type: int32
        YLeaf vtpvlandot10said; //type: binary
        YLeaf vtpvlanringnumber; //type: int32
        YLeaf vtpvlanbridgenumber; //type: int32
        YLeaf vtpvlanstptype; //type: VtpvlanstptypeEnum
        YLeaf vtpvlanparentvlan; //type: int32
        YLeaf vtpvlantranslationalvlan1; //type: int32
        YLeaf vtpvlantranslationalvlan2; //type: int32
        YLeaf vtpvlanbridgetype; //type: VtpvlanbridgetypeEnum
        YLeaf vtpvlanarehopcount; //type: int32
        YLeaf vtpvlanstehopcount; //type: int32
        YLeaf vtpvlaniscrfbackup; //type: boolean
        YLeaf vtpvlantypeext; //type: Vlantypeext
        YLeaf vtpvlanifindex; //type: int32
        YLeaf stpxvlanmistpinstmapinstindex; //type: int32
        class VtpvlanstateEnum;
        class VtpvlanstptypeEnum;
        class VtpvlanbridgetypeEnum;

}; // CiscoVtpMib::Vtpvlantable::Vtpvlanentry


class CiscoVtpMib::Vtpinternalvlantable : public Entity
{
    public:
        Vtpinternalvlantable();
        ~Vtpinternalvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpinternalvlanentry; //type: CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry> > vtpinternalvlanentry_;
        
}; // CiscoVtpMib::Vtpinternalvlantable


class CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry : public Entity
{
    public:
        Vtpinternalvlanentry();
        ~Vtpinternalvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        YLeaf vtpvlanindex;
        YLeaf vtpinternalvlanowner; //type: string

}; // CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry


class CiscoVtpMib::Vtpvlanedittable : public Entity
{
    public:
        Vtpvlanedittable();
        ~Vtpvlanedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpvlaneditentry; //type: CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry> > vtpvlaneditentry_;
        
}; // CiscoVtpMib::Vtpvlanedittable


class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry : public Entity
{
    public:
        Vtpvlaneditentry();
        ~Vtpvlaneditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpvlaneditindex; //type: int32
        YLeaf vtpvlaneditstate; //type: VtpvlaneditstateEnum
        YLeaf vtpvlanedittype; //type: VlantypeEnum
        YLeaf vtpvlaneditname; //type: string
        YLeaf vtpvlaneditmtu; //type: int32
        YLeaf vtpvlaneditdot10said; //type: binary
        YLeaf vtpvlaneditringnumber; //type: int32
        YLeaf vtpvlaneditbridgenumber; //type: int32
        YLeaf vtpvlaneditstptype; //type: VtpvlaneditstptypeEnum
        YLeaf vtpvlaneditparentvlan; //type: int32
        YLeaf vtpvlaneditrowstatus; //type: RowstatusEnum
        YLeaf vtpvlanedittranslationalvlan1; //type: int32
        YLeaf vtpvlanedittranslationalvlan2; //type: int32
        YLeaf vtpvlaneditbridgetype; //type: VtpvlaneditbridgetypeEnum
        YLeaf vtpvlaneditarehopcount; //type: int32
        YLeaf vtpvlaneditstehopcount; //type: int32
        YLeaf vtpvlaneditiscrfbackup; //type: boolean
        YLeaf vtpvlanedittypeext; //type: Vlantypeext
        YLeaf vtpvlanedittypeext2; //type: Vlantypeext
        YLeaf stpxvlanmistpinstmapeditinstindex; //type: int32
        class VtpvlaneditstateEnum;
        class VtpvlaneditstptypeEnum;
        class VtpvlaneditbridgetypeEnum;

}; // CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry


class CiscoVtpMib::Vtpvlanlocalshutdowntable : public Entity
{
    public:
        Vtpvlanlocalshutdowntable();
        ~Vtpvlanlocalshutdowntable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpvlanlocalshutdownentry; //type: CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry> > vtpvlanlocalshutdownentry_;
        
}; // CiscoVtpMib::Vtpvlanlocalshutdowntable


class CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry : public Entity
{
    public:
        Vtpvlanlocalshutdownentry();
        ~Vtpvlanlocalshutdownentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        YLeaf vtpvlanindex;
        YLeaf vtpvlanlocalshutdown; //type: VtpvlanlocalshutdownEnum
        class VtpvlanlocalshutdownEnum;

}; // CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry


class CiscoVtpMib::Vlantrunkporttable : public Entity
{
    public:
        Vlantrunkporttable();
        ~Vlantrunkporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlantrunkportentry; //type: CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry> > vlantrunkportentry_;
        
}; // CiscoVtpMib::Vlantrunkporttable


class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry : public Entity
{
    public:
        Vlantrunkportentry();
        ~Vlantrunkportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlantrunkportifindex; //type: int32
        YLeaf vlantrunkportmanagementdomain; //type: int32
        YLeaf vlantrunkportencapsulationtype; //type: VlantrunkportencapsulationtypeEnum
        YLeaf vlantrunkportvlansenabled; //type: binary
        YLeaf vlantrunkportnativevlan; //type: int32
        YLeaf vlantrunkportrowstatus; //type: RowstatusEnum
        YLeaf vlantrunkportinjoins; //type: uint32
        YLeaf vlantrunkportoutjoins; //type: uint32
        YLeaf vlantrunkportoldadverts; //type: uint32
        YLeaf vlantrunkportvlanspruningeligible; //type: binary
        YLeaf vlantrunkportvlansxmitjoined; //type: binary
        YLeaf vlantrunkportvlansrcvjoined; //type: binary
        YLeaf vlantrunkportdynamicstate; //type: VlantrunkportdynamicstateEnum
        YLeaf vlantrunkportdynamicstatus; //type: VlantrunkportdynamicstatusEnum
        YLeaf vlantrunkportvtpenabled; //type: boolean
        YLeaf vlantrunkportencapsulationopertype; //type: VlantrunkportencapsulationopertypeEnum
        YLeaf vlantrunkportvlansenabled2k; //type: binary
        YLeaf vlantrunkportvlansenabled3k; //type: binary
        YLeaf vlantrunkportvlansenabled4k; //type: binary
        YLeaf vtpvlanspruningeligible2k; //type: binary
        YLeaf vtpvlanspruningeligible3k; //type: binary
        YLeaf vtpvlanspruningeligible4k; //type: binary
        YLeaf vlantrunkportvlansxmitjoined2k; //type: binary
        YLeaf vlantrunkportvlansxmitjoined3k; //type: binary
        YLeaf vlantrunkportvlansxmitjoined4k; //type: binary
        YLeaf vlantrunkportvlansrcvjoined2k; //type: binary
        YLeaf vlantrunkportvlansrcvjoined3k; //type: binary
        YLeaf vlantrunkportvlansrcvjoined4k; //type: binary
        YLeaf vlantrunkportdot1qtunnel; //type: Vlantrunkportdot1QtunnelEnum
        YLeaf vlantrunkportvlansactivefirst2k; //type: binary
        YLeaf vlantrunkportvlansactivesecond2k; //type: binary
        YLeaf stpxpreferredvlansmap; //type: binary
        YLeaf stpxpreferredvlansmap2k; //type: binary
        YLeaf stpxpreferredvlansmap3k; //type: binary
        YLeaf stpxpreferredvlansmap4k; //type: binary
        YLeaf stpxpreferredmistpinstancesmap; //type: binary
        YLeaf stpxpreferredmstinstancesmap; //type: binary
        class VlantrunkportencapsulationtypeEnum;
        class VlantrunkportdynamicstateEnum;
        class VlantrunkportdynamicstatusEnum;
        class VlantrunkportencapsulationopertypeEnum;
        class Vlantrunkportdot1QtunnelEnum;

}; // CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry


class CiscoVtpMib::Vtpdiscovertable : public Entity
{
    public:
        Vtpdiscovertable();
        ~Vtpdiscovertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpdiscoverentry; //type: CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry> > vtpdiscoverentry_;
        
}; // CiscoVtpMib::Vtpdiscovertable


class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry : public Entity
{
    public:
        Vtpdiscoverentry();
        ~Vtpdiscoverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpdiscoveraction; //type: VtpdiscoveractionEnum
        YLeaf vtpdiscoverstatus; //type: VtpdiscoverstatusEnum
        YLeaf vtplastdiscovertime; //type: uint32
        class VtpdiscoveractionEnum;
        class VtpdiscoverstatusEnum;

}; // CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry


class CiscoVtpMib::Vtpdiscoverresulttable : public Entity
{
    public:
        Vtpdiscoverresulttable();
        ~Vtpdiscoverresulttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpdiscoverresultentry; //type: CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry> > vtpdiscoverresultentry_;
        
}; // CiscoVtpMib::Vtpdiscoverresulttable


class CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry : public Entity
{
    public:
        Vtpdiscoverresultentry();
        ~Vtpdiscoverresultentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpdiscoverresultindex; //type: uint32
        YLeaf vtpdiscoverresultdatabasename; //type: string
        YLeaf vtpdiscoverresultconflicting; //type: boolean
        YLeaf vtpdiscoverresultdeviceid; //type: string
        YLeaf vtpdiscoverresultprimaryserver; //type: string
        YLeaf vtpdiscoverresultrevnumber; //type: uint32
        YLeaf vtpdiscoverresultsystemname; //type: string

}; // CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry


class CiscoVtpMib::Vtpdatabasetable : public Entity
{
    public:
        Vtpdatabasetable();
        ~Vtpdatabasetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpdatabaseentry; //type: CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry> > vtpdatabaseentry_;
        
}; // CiscoVtpMib::Vtpdatabasetable


class CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry : public Entity
{
    public:
        Vtpdatabaseentry();
        ~Vtpdatabaseentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpdatabaseindex; //type: uint32
        YLeaf vtpdatabasename; //type: string
        YLeaf vtpdatabaselocalmode; //type: VtpdatabaselocalmodeEnum
        YLeaf vtpdatabaserevnumber; //type: uint32
        YLeaf vtpdatabaseprimaryserver; //type: boolean
        YLeaf vtpdatabaseprimaryserverid; //type: string
        YLeaf vtpdatabasetakeoverprimary; //type: boolean
        YLeaf vtpdatabasetakeoverpassword; //type: string
        class VtpdatabaselocalmodeEnum;

}; // CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry


class CiscoVtpMib::Vtpauthenticationtable : public Entity
{
    public:
        Vtpauthenticationtable();
        ~Vtpauthenticationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vtpauthentry; //type: CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry> > vtpauthentry_;
        
}; // CiscoVtpMib::Vtpauthenticationtable


class CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry : public Entity
{
    public:
        Vtpauthentry();
        ~Vtpauthentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        YLeaf managementdomainindex;
        YLeaf vtpauthpassword; //type: string
        YLeaf vtpauthpasswordtype; //type: VtpauthpasswordtypeEnum
        YLeaf vtpauthsecretkey; //type: binary
        class VtpauthpasswordtypeEnum;

}; // CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry

class VlantypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf fddi;
        static const Enum::YLeaf tokenRing;
        static const Enum::YLeaf fddiNet;
        static const Enum::YLeaf trNet;
        static const Enum::YLeaf deprecated;

};

class CiscoVtpMib::Vtpstatus::VtpversionEnum : public Enum
{
    public:
        static const Enum::YLeaf one;
        static const Enum::YLeaf two;
        static const Enum::YLeaf none;
        static const Enum::YLeaf three;

};

class CiscoVtpMib::Internalvlaninfo::VtpinternalvlanallocpolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf ascending;
        static const Enum::YLeaf descending;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainlocalmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf client;
        static const Enum::YLeaf server;
        static const Enum::YLeaf transparent;
        static const Enum::YLeaf off;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainversioninuseEnum : public Enum
{
    public:
        static const Enum::YLeaf version1;
        static const Enum::YLeaf version2;
        static const Enum::YLeaf none;
        static const Enum::YLeaf version3;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::ManagementdomainpruningstateoperEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlaneditoperationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf copy;
        static const Enum::YLeaf apply;
        static const Enum::YLeaf release;
        static const Enum::YLeaf restartTimer;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::VtpvlanapplystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf succeeded;
        static const Enum::YLeaf configNumberError;
        static const Enum::YLeaf inconsistentEdit;
        static const Enum::YLeaf tooBig;
        static const Enum::YLeaf localNVStoreFail;
        static const Enum::YLeaf remoteNVStoreFail;
        static const Enum::YLeaf editBufferEmpty;
        static const Enum::YLeaf someOtherError;
        static const Enum::YLeaf notPrimaryServer;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstateEnum : public Enum
{
    public:
        static const Enum::YLeaf operational;
        static const Enum::YLeaf suspended;
        static const Enum::YLeaf mtuTooBigForDevice;
        static const Enum::YLeaf mtuTooBigForTrunk;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanstptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ieee;
        static const Enum::YLeaf ibm;
        static const Enum::YLeaf hybrid;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::VtpvlanbridgetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf srt;
        static const Enum::YLeaf srb;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstateEnum : public Enum
{
    public:
        static const Enum::YLeaf operational;
        static const Enum::YLeaf suspended;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditstptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ieee;
        static const Enum::YLeaf ibm;
        static const Enum::YLeaf auto_;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::VtpvlaneditbridgetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf srt;
        static const Enum::YLeaf srb;

};

class CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::VtpvlanlocalshutdownEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf isl;
        static const Enum::YLeaf dot10;
        static const Enum::YLeaf lane;
        static const Enum::YLeaf dot1Q;
        static const Enum::YLeaf negotiate;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstateEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf off;
        static const Enum::YLeaf desirable;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf onNoNegotiate;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportdynamicstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf trunking;
        static const Enum::YLeaf notTrunking;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::VlantrunkportencapsulationopertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf isl;
        static const Enum::YLeaf dot10;
        static const Enum::YLeaf lane;
        static const Enum::YLeaf dot1Q;
        static const Enum::YLeaf negotiating;
        static const Enum::YLeaf notApplicable;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1QtunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf trunk;
        static const Enum::YLeaf access;
        static const Enum::YLeaf disabled;

};

class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoveractionEnum : public Enum
{
    public:
        static const Enum::YLeaf discover;
        static const Enum::YLeaf noOperation;
        static const Enum::YLeaf purgeResult;

};

class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::VtpdiscoverstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf inProgress;
        static const Enum::YLeaf succeeded;
        static const Enum::YLeaf resourceUnavailable;
        static const Enum::YLeaf someOtherError;

};

class CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::VtpdatabaselocalmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf client;
        static const Enum::YLeaf server;
        static const Enum::YLeaf transparent;
        static const Enum::YLeaf off;

};

class CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::VtpauthpasswordtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf plaintext;
        static const Enum::YLeaf hidden;

};


}
}

#endif /* _CISCO_VTP_MIB_ */

