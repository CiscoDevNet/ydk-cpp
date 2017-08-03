#ifndef _CISCO_VTP_MIB_
#define _CISCO_VTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VTP_MIB {

class CiscoVtpMib : public ydk::Entity
{
    public:
        CiscoVtpMib();
        ~CiscoVtpMib();

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

        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Internalvlaninfo> internalvlaninfo;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable> managementdomaintable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlanstatistics> vlanstatistics;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkports> vlantrunkports;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkporttable> vlantrunkporttable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpauthenticationtable> vtpauthenticationtable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdatabasetable> vtpdatabasetable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscoverresulttable> vtpdiscoverresulttable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscovertable> vtpdiscovertable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpinternalvlantable> vtpinternalvlantable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpstatus> vtpstatus;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanedittable> vtpvlanedittable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanlocalshutdowntable> vtpvlanlocalshutdowntable;
        std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable> vtpvlantable;
        
}; // CiscoVtpMib


class CiscoVtpMib::Vtpstatus : public ydk::Entity
{
    public:
        Vtpstatus();
        ~Vtpstatus();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vtpversion; //type: Vtpversion
        ydk::YLeaf vtpmaxvlanstorage; //type: int32
        ydk::YLeaf vtpnotificationsenabled; //type: boolean
        ydk::YLeaf vtpvlancreatednotifenabled; //type: boolean
        ydk::YLeaf vtpvlandeletednotifenabled; //type: boolean
        class Vtpversion;

}; // CiscoVtpMib::Vtpstatus


class CiscoVtpMib::Internalvlaninfo : public ydk::Entity
{
    public:
        Internalvlaninfo();
        ~Internalvlaninfo();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vtpinternalvlanallocpolicy; //type: Vtpinternalvlanallocpolicy
        class Vtpinternalvlanallocpolicy;

}; // CiscoVtpMib::Internalvlaninfo


class CiscoVtpMib::Vlantrunkports : public ydk::Entity
{
    public:
        Vlantrunkports();
        ~Vlantrunkports();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlantrunkportsetserialno; //type: int32
        ydk::YLeaf vlantrunkportsdot1qtag; //type: boolean

}; // CiscoVtpMib::Vlantrunkports


class CiscoVtpMib::Vlanstatistics : public ydk::Entity
{
    public:
        Vlanstatistics();
        ~Vlanstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanstatsvlans; //type: uint32
        ydk::YLeaf vlanstatsextendedvlans; //type: uint32
        ydk::YLeaf vlanstatsinternalvlans; //type: uint32
        ydk::YLeaf vlanstatsfreevlans; //type: uint32

}; // CiscoVtpMib::Vlanstatistics


class CiscoVtpMib::Managementdomaintable : public ydk::Entity
{
    public:
        Managementdomaintable();
        ~Managementdomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Managementdomainentry; //type: CiscoVtpMib::Managementdomaintable::Managementdomainentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry> > managementdomainentry;
        
}; // CiscoVtpMib::Managementdomaintable


class CiscoVtpMib::Managementdomaintable::Managementdomainentry : public ydk::Entity
{
    public:
        Managementdomainentry();
        ~Managementdomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf managementdomainindex; //type: int32
        ydk::YLeaf managementdomainname; //type: string
        ydk::YLeaf managementdomainlocalmode; //type: Managementdomainlocalmode
        ydk::YLeaf managementdomainconfigrevnumber; //type: uint32
        ydk::YLeaf managementdomainlastupdater; //type: string
        ydk::YLeaf managementdomainlastchange; //type: string
        ydk::YLeaf managementdomainrowstatus; //type: Rowstatus
        ydk::YLeaf managementdomaintftpserver; //type: string
        ydk::YLeaf managementdomaintftppathname; //type: string
        ydk::YLeaf managementdomainpruningstate; //type: Managementdomainpruningstate
        ydk::YLeaf managementdomainversioninuse; //type: Managementdomainversioninuse
        ydk::YLeaf managementdomainpruningstateoper; //type: Managementdomainpruningstateoper
        ydk::YLeaf managementdomainadminsrcif; //type: string
        ydk::YLeaf managementdomainsourceonlymode; //type: boolean
        ydk::YLeaf managementdomainopersrcif; //type: string
        ydk::YLeaf managementdomainconfigfile; //type: string
        ydk::YLeaf managementdomainlocalupdatertype; //type: Inetaddresstype
        ydk::YLeaf managementdomainlocalupdater; //type: binary
        ydk::YLeaf managementdomaindeviceid; //type: string
        ydk::YLeaf vtpvlaneditoperation; //type: Vtpvlaneditoperation
        ydk::YLeaf vtpvlanapplystatus; //type: Vtpvlanapplystatus
        ydk::YLeaf vtpvlaneditbufferowner; //type: binary
        ydk::YLeaf vtpvlaneditconfigrevnumber; //type: uint32
        ydk::YLeaf vtpvlaneditmodifiedvlan; //type: int32
        ydk::YLeaf vtpinsummaryadverts; //type: uint32
        ydk::YLeaf vtpinsubsetadverts; //type: uint32
        ydk::YLeaf vtpinadvertrequests; //type: uint32
        ydk::YLeaf vtpoutsummaryadverts; //type: uint32
        ydk::YLeaf vtpoutsubsetadverts; //type: uint32
        ydk::YLeaf vtpoutadvertrequests; //type: uint32
        ydk::YLeaf vtpconfigrevnumbererrors; //type: uint32
        ydk::YLeaf vtpconfigdigesterrors; //type: uint32
        class Managementdomainlocalmode;
        class Managementdomainpruningstate;
        class Managementdomainversioninuse;
        class Managementdomainpruningstateoper;
        class Vtpvlaneditoperation;
        class Vtpvlanapplystatus;

}; // CiscoVtpMib::Managementdomaintable::Managementdomainentry


class CiscoVtpMib::Vtpvlantable : public ydk::Entity
{
    public:
        Vtpvlantable();
        ~Vtpvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpvlanentry; //type: CiscoVtpMib::Vtpvlantable::Vtpvlanentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry> > vtpvlanentry;
        
}; // CiscoVtpMib::Vtpvlantable


class CiscoVtpMib::Vtpvlantable::Vtpvlanentry : public ydk::Entity
{
    public:
        Vtpvlanentry();
        ~Vtpvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlanindex; //type: int32
        ydk::YLeaf vtpvlanstate; //type: Vtpvlanstate
        ydk::YLeaf vtpvlantype; //type: Vlantype
        ydk::YLeaf vtpvlanname; //type: string
        ydk::YLeaf vtpvlanmtu; //type: int32
        ydk::YLeaf vtpvlandot10said; //type: binary
        ydk::YLeaf vtpvlanringnumber; //type: int32
        ydk::YLeaf vtpvlanbridgenumber; //type: int32
        ydk::YLeaf vtpvlanstptype; //type: Vtpvlanstptype
        ydk::YLeaf vtpvlanparentvlan; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlantranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlanbridgetype; //type: Vtpvlanbridgetype
        ydk::YLeaf vtpvlanarehopcount; //type: int32
        ydk::YLeaf vtpvlanstehopcount; //type: int32
        ydk::YLeaf vtpvlaniscrfbackup; //type: boolean
        ydk::YLeaf vtpvlantypeext; //type: Vlantypeext
        ydk::YLeaf vtpvlanifindex; //type: int32
        ydk::YLeaf stpxvlanmistpinstmapinstindex; //type: int32
        class Vtpvlanstate;
        class Vtpvlanstptype;
        class Vtpvlanbridgetype;

}; // CiscoVtpMib::Vtpvlantable::Vtpvlanentry


class CiscoVtpMib::Vtpinternalvlantable : public ydk::Entity
{
    public:
        Vtpinternalvlantable();
        ~Vtpinternalvlantable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpinternalvlanentry; //type: CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry> > vtpinternalvlanentry;
        
}; // CiscoVtpMib::Vtpinternalvlantable


class CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry : public ydk::Entity
{
    public:
        Vtpinternalvlanentry();
        ~Vtpinternalvlanentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpinternalvlanowner; //type: string

}; // CiscoVtpMib::Vtpinternalvlantable::Vtpinternalvlanentry


class CiscoVtpMib::Vtpvlanedittable : public ydk::Entity
{
    public:
        Vtpvlanedittable();
        ~Vtpvlanedittable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpvlaneditentry; //type: CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry> > vtpvlaneditentry;
        
}; // CiscoVtpMib::Vtpvlanedittable


class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry : public ydk::Entity
{
    public:
        Vtpvlaneditentry();
        ~Vtpvlaneditentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpvlaneditindex; //type: int32
        ydk::YLeaf vtpvlaneditstate; //type: Vtpvlaneditstate
        ydk::YLeaf vtpvlanedittype; //type: Vlantype
        ydk::YLeaf vtpvlaneditname; //type: string
        ydk::YLeaf vtpvlaneditmtu; //type: int32
        ydk::YLeaf vtpvlaneditdot10said; //type: binary
        ydk::YLeaf vtpvlaneditringnumber; //type: int32
        ydk::YLeaf vtpvlaneditbridgenumber; //type: int32
        ydk::YLeaf vtpvlaneditstptype; //type: Vtpvlaneditstptype
        ydk::YLeaf vtpvlaneditparentvlan; //type: int32
        ydk::YLeaf vtpvlaneditrowstatus; //type: Rowstatus
        ydk::YLeaf vtpvlanedittranslationalvlan1; //type: int32
        ydk::YLeaf vtpvlanedittranslationalvlan2; //type: int32
        ydk::YLeaf vtpvlaneditbridgetype; //type: Vtpvlaneditbridgetype
        ydk::YLeaf vtpvlaneditarehopcount; //type: int32
        ydk::YLeaf vtpvlaneditstehopcount; //type: int32
        ydk::YLeaf vtpvlaneditiscrfbackup; //type: boolean
        ydk::YLeaf vtpvlanedittypeext; //type: Vlantypeext
        ydk::YLeaf vtpvlanedittypeext2; //type: Vlantypeext
        ydk::YLeaf stpxvlanmistpinstmapeditinstindex; //type: int32
        class Vtpvlaneditstate;
        class Vtpvlaneditstptype;
        class Vtpvlaneditbridgetype;

}; // CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry


class CiscoVtpMib::Vtpvlanlocalshutdowntable : public ydk::Entity
{
    public:
        Vtpvlanlocalshutdowntable();
        ~Vtpvlanlocalshutdowntable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpvlanlocalshutdownentry; //type: CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry> > vtpvlanlocalshutdownentry;
        
}; // CiscoVtpMib::Vtpvlanlocalshutdowntable


class CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry : public ydk::Entity
{
    public:
        Vtpvlanlocalshutdownentry();
        ~Vtpvlanlocalshutdownentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Vtpvlantable::Vtpvlanentry::vtpvlanindex)
        ydk::YLeaf vtpvlanindex;
        ydk::YLeaf vtpvlanlocalshutdown; //type: Vtpvlanlocalshutdown
        class Vtpvlanlocalshutdown;

}; // CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry


class CiscoVtpMib::Vlantrunkporttable : public ydk::Entity
{
    public:
        Vlantrunkporttable();
        ~Vlantrunkporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlantrunkportentry; //type: CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry> > vlantrunkportentry;
        
}; // CiscoVtpMib::Vlantrunkporttable


class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry : public ydk::Entity
{
    public:
        Vlantrunkportentry();
        ~Vlantrunkportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlantrunkportifindex; //type: int32
        ydk::YLeaf vlantrunkportmanagementdomain; //type: int32
        ydk::YLeaf vlantrunkportencapsulationtype; //type: Vlantrunkportencapsulationtype
        ydk::YLeaf vlantrunkportvlansenabled; //type: binary
        ydk::YLeaf vlantrunkportnativevlan; //type: int32
        ydk::YLeaf vlantrunkportrowstatus; //type: Rowstatus
        ydk::YLeaf vlantrunkportinjoins; //type: uint32
        ydk::YLeaf vlantrunkportoutjoins; //type: uint32
        ydk::YLeaf vlantrunkportoldadverts; //type: uint32
        ydk::YLeaf vlantrunkportvlanspruningeligible; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined; //type: binary
        ydk::YLeaf vlantrunkportdynamicstate; //type: Vlantrunkportdynamicstate
        ydk::YLeaf vlantrunkportdynamicstatus; //type: Vlantrunkportdynamicstatus
        ydk::YLeaf vlantrunkportvtpenabled; //type: boolean
        ydk::YLeaf vlantrunkportencapsulationopertype; //type: Vlantrunkportencapsulationopertype
        ydk::YLeaf vlantrunkportvlansenabled2k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled3k; //type: binary
        ydk::YLeaf vlantrunkportvlansenabled4k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible2k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible3k; //type: binary
        ydk::YLeaf vtpvlanspruningeligible4k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansxmitjoined4k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined2k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined3k; //type: binary
        ydk::YLeaf vlantrunkportvlansrcvjoined4k; //type: binary
        ydk::YLeaf vlantrunkportdot1qtunnel; //type: Vlantrunkportdot1Qtunnel
        ydk::YLeaf vlantrunkportvlansactivefirst2k; //type: binary
        ydk::YLeaf vlantrunkportvlansactivesecond2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap; //type: binary
        ydk::YLeaf stpxpreferredvlansmap2k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap3k; //type: binary
        ydk::YLeaf stpxpreferredvlansmap4k; //type: binary
        ydk::YLeaf stpxpreferredmistpinstancesmap; //type: binary
        ydk::YLeaf stpxpreferredmstinstancesmap; //type: binary
        class Vlantrunkportencapsulationtype;
        class Vlantrunkportdynamicstate;
        class Vlantrunkportdynamicstatus;
        class Vlantrunkportencapsulationopertype;
        class Vlantrunkportdot1Qtunnel;

}; // CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry


class CiscoVtpMib::Vtpdiscovertable : public ydk::Entity
{
    public:
        Vtpdiscovertable();
        ~Vtpdiscovertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpdiscoverentry; //type: CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry> > vtpdiscoverentry;
        
}; // CiscoVtpMib::Vtpdiscovertable


class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry : public ydk::Entity
{
    public:
        Vtpdiscoverentry();
        ~Vtpdiscoverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoveraction; //type: Vtpdiscoveraction
        ydk::YLeaf vtpdiscoverstatus; //type: Vtpdiscoverstatus
        ydk::YLeaf vtplastdiscovertime; //type: uint32
        class Vtpdiscoveraction;
        class Vtpdiscoverstatus;

}; // CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry


class CiscoVtpMib::Vtpdiscoverresulttable : public ydk::Entity
{
    public:
        Vtpdiscoverresulttable();
        ~Vtpdiscoverresulttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpdiscoverresultentry; //type: CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry> > vtpdiscoverresultentry;
        
}; // CiscoVtpMib::Vtpdiscoverresulttable


class CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry : public ydk::Entity
{
    public:
        Vtpdiscoverresultentry();
        ~Vtpdiscoverresultentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdiscoverresultindex; //type: uint32
        ydk::YLeaf vtpdiscoverresultdatabasename; //type: string
        ydk::YLeaf vtpdiscoverresultconflicting; //type: boolean
        ydk::YLeaf vtpdiscoverresultdeviceid; //type: string
        ydk::YLeaf vtpdiscoverresultprimaryserver; //type: string
        ydk::YLeaf vtpdiscoverresultrevnumber; //type: uint32
        ydk::YLeaf vtpdiscoverresultsystemname; //type: string

}; // CiscoVtpMib::Vtpdiscoverresulttable::Vtpdiscoverresultentry


class CiscoVtpMib::Vtpdatabasetable : public ydk::Entity
{
    public:
        Vtpdatabasetable();
        ~Vtpdatabasetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpdatabaseentry; //type: CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry> > vtpdatabaseentry;
        
}; // CiscoVtpMib::Vtpdatabasetable


class CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry : public ydk::Entity
{
    public:
        Vtpdatabaseentry();
        ~Vtpdatabaseentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpdatabaseindex; //type: uint32
        ydk::YLeaf vtpdatabasename; //type: string
        ydk::YLeaf vtpdatabaselocalmode; //type: Vtpdatabaselocalmode
        ydk::YLeaf vtpdatabaserevnumber; //type: uint32
        ydk::YLeaf vtpdatabaseprimaryserver; //type: boolean
        ydk::YLeaf vtpdatabaseprimaryserverid; //type: string
        ydk::YLeaf vtpdatabasetakeoverprimary; //type: boolean
        ydk::YLeaf vtpdatabasetakeoverpassword; //type: string
        class Vtpdatabaselocalmode;

}; // CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry


class CiscoVtpMib::Vtpauthenticationtable : public ydk::Entity
{
    public:
        Vtpauthenticationtable();
        ~Vtpauthenticationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vtpauthentry; //type: CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry

        std::vector<std::shared_ptr<CISCO_VTP_MIB::CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry> > vtpauthentry;
        
}; // CiscoVtpMib::Vtpauthenticationtable


class CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry : public ydk::Entity
{
    public:
        Vtpauthentry();
        ~Vtpauthentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_VTP_MIB::CiscoVtpMib::Managementdomaintable::Managementdomainentry::managementdomainindex)
        ydk::YLeaf managementdomainindex;
        ydk::YLeaf vtpauthpassword; //type: string
        ydk::YLeaf vtpauthpasswordtype; //type: Vtpauthpasswordtype
        ydk::YLeaf vtpauthsecretkey; //type: binary
        class Vtpauthpasswordtype;

}; // CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry

class Vlantype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf fddi;
        static const ydk::Enum::YLeaf tokenRing;
        static const ydk::Enum::YLeaf fddiNet;
        static const ydk::Enum::YLeaf trNet;
        static const ydk::Enum::YLeaf deprecated;

};

class CiscoVtpMib::Vtpstatus::Vtpversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf one;
        static const ydk::Enum::YLeaf two;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf three;

};

class CiscoVtpMib::Internalvlaninfo::Vtpinternalvlanallocpolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascending;
        static const ydk::Enum::YLeaf descending;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Managementdomainlocalmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Managementdomainpruningstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Managementdomainversioninuse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version1;
        static const ydk::Enum::YLeaf version2;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf version3;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Managementdomainpruningstateoper : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Vtpvlaneditoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf copy;
        static const ydk::Enum::YLeaf apply;
        static const ydk::Enum::YLeaf release;
        static const ydk::Enum::YLeaf restartTimer;

};

class CiscoVtpMib::Managementdomaintable::Managementdomainentry::Vtpvlanapplystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf configNumberError;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf tooBig;
        static const ydk::Enum::YLeaf localNVStoreFail;
        static const ydk::Enum::YLeaf remoteNVStoreFail;
        static const ydk::Enum::YLeaf editBufferEmpty;
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf notPrimaryServer;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::Vtpvlanstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;
        static const ydk::Enum::YLeaf mtuTooBigForDevice;
        static const ydk::Enum::YLeaf mtuTooBigForTrunk;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::Vtpvlanstptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf hybrid;

};

class CiscoVtpMib::Vtpvlantable::Vtpvlanentry::Vtpvlanbridgetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf suspended;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditstptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ieee;
        static const ydk::Enum::YLeaf ibm;
        static const ydk::Enum::YLeaf auto_;

};

class CiscoVtpMib::Vtpvlanedittable::Vtpvlaneditentry::Vtpvlaneditbridgetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srt;
        static const ydk::Enum::YLeaf srb;

};

class CiscoVtpMib::Vtpvlanlocalshutdowntable::Vtpvlanlocalshutdownentry::Vtpvlanlocalshutdown : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiate;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf desirable;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf onNoNegotiate;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdynamicstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunking;
        static const ydk::Enum::YLeaf notTrunking;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportencapsulationopertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf dot10;
        static const ydk::Enum::YLeaf lane;
        static const ydk::Enum::YLeaf dot1Q;
        static const ydk::Enum::YLeaf negotiating;
        static const ydk::Enum::YLeaf notApplicable;

};

class CiscoVtpMib::Vlantrunkporttable::Vlantrunkportentry::Vlantrunkportdot1Qtunnel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf trunk;
        static const ydk::Enum::YLeaf access;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoveraction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discover;
        static const ydk::Enum::YLeaf noOperation;
        static const ydk::Enum::YLeaf purgeResult;

};

class CiscoVtpMib::Vtpdiscovertable::Vtpdiscoverentry::Vtpdiscoverstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf resourceUnavailable;
        static const ydk::Enum::YLeaf someOtherError;

};

class CiscoVtpMib::Vtpdatabasetable::Vtpdatabaseentry::Vtpdatabaselocalmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf client;
        static const ydk::Enum::YLeaf server;
        static const ydk::Enum::YLeaf transparent;
        static const ydk::Enum::YLeaf off;

};

class CiscoVtpMib::Vtpauthenticationtable::Vtpauthentry::Vtpauthpasswordtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plaintext;
        static const ydk::Enum::YLeaf hidden;

};


}
}

#endif /* _CISCO_VTP_MIB_ */

