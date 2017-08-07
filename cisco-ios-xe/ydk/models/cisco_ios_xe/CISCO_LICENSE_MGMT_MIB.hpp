#ifndef _CISCO_LICENSE_MGMT_MIB_
#define _CISCO_LICENSE_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_LICENSE_MGMT_MIB {

class CiscoLicenseMgmtMib : public ydk::Entity
{
    public:
        CiscoLicenseMgmtMib();
        ~CiscoLicenseMgmtMib();

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

        class Clmgmtlicenseconfiguration; //type: CiscoLicenseMgmtMib::Clmgmtlicenseconfiguration
        class Clmgmtlicensedeviceinformation; //type: CiscoLicenseMgmtMib::Clmgmtlicensedeviceinformation
        class Clmgmtlicensenotifobjects; //type: CiscoLicenseMgmtMib::Clmgmtlicensenotifobjects
        class Clmgmtlicenseactiontable; //type: CiscoLicenseMgmtMib::Clmgmtlicenseactiontable
        class Clmgmtlicenseactionresulttable; //type: CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable
        class Clmgmtlicensestoreinfotable; //type: CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable
        class Clmgmtlicensedeviceinfotable; //type: CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable
        class Clmgmtlicenseinfotable; //type: CiscoLicenseMgmtMib::Clmgmtlicenseinfotable
        class Clmgmtlicensablefeaturetable; //type: CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable
        class Clmgmtdevcredexportactiontable; //type: CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable

        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable> clmgmtdevcredexportactiontable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable> clmgmtlicensablefeaturetable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable> clmgmtlicenseactionresulttable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseactiontable> clmgmtlicenseactiontable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseconfiguration> clmgmtlicenseconfiguration;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensedeviceinformation> clmgmtlicensedeviceinformation;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable> clmgmtlicensedeviceinfotable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseinfotable> clmgmtlicenseinfotable;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensenotifobjects> clmgmtlicensenotifobjects;
        std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable> clmgmtlicensestoreinfotable;
        
}; // CiscoLicenseMgmtMib


class CiscoLicenseMgmtMib::Clmgmtlicenseconfiguration : public ydk::Entity
{
    public:
        Clmgmtlicenseconfiguration();
        ~Clmgmtlicenseconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clmgmtnextfreelicenseactionindex; //type: uint32

}; // CiscoLicenseMgmtMib::Clmgmtlicenseconfiguration


class CiscoLicenseMgmtMib::Clmgmtlicensedeviceinformation : public ydk::Entity
{
    public:
        Clmgmtlicensedeviceinformation();
        ~Clmgmtlicensedeviceinformation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clmgmtnextfreedevcredexportactionindex; //type: uint32

}; // CiscoLicenseMgmtMib::Clmgmtlicensedeviceinformation


class CiscoLicenseMgmtMib::Clmgmtlicensenotifobjects : public ydk::Entity
{
    public:
        Clmgmtlicensenotifobjects();
        ~Clmgmtlicensenotifobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clmgmtlicenseusagenotifenable; //type: boolean
        ydk::YLeaf clmgmtlicensedeploymentnotifenable; //type: boolean
        ydk::YLeaf clmgmtlicenseerrornotifenable; //type: Clmgmtlicenseerrornotifenable
        class Clmgmtlicenseerrornotifenable;

}; // CiscoLicenseMgmtMib::Clmgmtlicensenotifobjects


class CiscoLicenseMgmtMib::Clmgmtlicenseactiontable : public ydk::Entity
{
    public:
        Clmgmtlicenseactiontable();
        ~Clmgmtlicenseactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicenseactionentry; //type: CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry> > clmgmtlicenseactionentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicenseactiontable


class CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry : public ydk::Entity
{
    public:
        Clmgmtlicenseactionentry();
        ~Clmgmtlicenseactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clmgmtlicenseactionindex; //type: uint32
        ydk::YLeaf clmgmtlicenseactionentphysicalindex; //type: int32
        ydk::YLeaf clmgmtlicenseactiontransferprotocol; //type: Clmgmtlicensetransferprotocol
        ydk::YLeaf clmgmtlicenseserveraddresstype; //type: Inetaddresstype
        ydk::YLeaf clmgmtlicenseserveraddress; //type: binary
        ydk::YLeaf clmgmtlicenseserverusername; //type: string
        ydk::YLeaf clmgmtlicenseserverpassword; //type: string
        ydk::YLeaf clmgmtlicensefile; //type: string
        ydk::YLeaf clmgmtlicensestore; //type: uint32
        ydk::YLeaf clmgmtlicenseactionlicenseindex; //type: uint32
        ydk::YLeaf clmgmtlicensepermissionticketfile; //type: string
        ydk::YLeaf clmgmtlicenserehostticketfile; //type: string
        ydk::YLeaf clmgmtlicensebackupfile; //type: string
        ydk::YLeaf clmgmtlicensestoponfailure; //type: boolean
        ydk::YLeaf clmgmtlicenseaction; //type: Clmgmtlicenseaction
        ydk::YLeaf clmgmtlicenseactionstate; //type: Clmgmtlicenseactionstate
        ydk::YLeaf clmgmtlicensejobqposition; //type: uint32
        ydk::YLeaf clmgmtlicenseactionfailcause; //type: Clmgmtlicenseactionfailcause
        ydk::YLeaf clmgmtlicenseactionstoragetype; //type: Storagetype
        ydk::YLeaf clmgmtlicenseactionrowstatus; //type: Rowstatus
        ydk::YLeaf clmgmtlicenseaccepteula; //type: boolean
        ydk::YLeaf clmgmtlicenseeulafile; //type: string
        class Clmgmtlicenseaction;

}; // CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry


class CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable : public ydk::Entity
{
    public:
        Clmgmtlicenseactionresulttable();
        ~Clmgmtlicenseactionresulttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicenseactionresultentry; //type: CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry> > clmgmtlicenseactionresultentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable


class CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry : public ydk::Entity
{
    public:
        Clmgmtlicenseactionresultentry();
        ~Clmgmtlicenseactionresultentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::clmgmtlicenseactionindex)
        ydk::YLeaf clmgmtlicenseactionindex;
        ydk::YLeaf clmgmtlicensenumber; //type: uint32
        ydk::YLeaf clmgmtlicenseindivactionstate; //type: Clmgmtlicenseactionstate
        ydk::YLeaf clmgmtlicenseindivactionfailcause; //type: Clmgmtlicenseactionfailcause

}; // CiscoLicenseMgmtMib::Clmgmtlicenseactionresulttable::Clmgmtlicenseactionresultentry


class CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable : public ydk::Entity
{
    public:
        Clmgmtlicensestoreinfotable();
        ~Clmgmtlicensestoreinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicensestoreinfoentry; //type: CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry> > clmgmtlicensestoreinfoentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable


class CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry : public ydk::Entity
{
    public:
        Clmgmtlicensestoreinfoentry();
        ~Clmgmtlicensestoreinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtlicensestoreindex; //type: uint32
        ydk::YLeaf clmgmtlicensestorename; //type: string
        ydk::YLeaf clmgmtlicensestoretotalsize; //type: uint32
        ydk::YLeaf clmgmtlicensestoresizeremaining; //type: uint32

}; // CiscoLicenseMgmtMib::Clmgmtlicensestoreinfotable::Clmgmtlicensestoreinfoentry


class CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable : public ydk::Entity
{
    public:
        Clmgmtlicensedeviceinfotable();
        ~Clmgmtlicensedeviceinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicensedeviceinfoentry; //type: CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry> > clmgmtlicensedeviceinfoentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable


class CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry : public ydk::Entity
{
    public:
        Clmgmtlicensedeviceinfoentry();
        ~Clmgmtlicensedeviceinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtdefaultlicensestore; //type: uint32

}; // CiscoLicenseMgmtMib::Clmgmtlicensedeviceinfotable::Clmgmtlicensedeviceinfoentry


class CiscoLicenseMgmtMib::Clmgmtlicenseinfotable : public ydk::Entity
{
    public:
        Clmgmtlicenseinfotable();
        ~Clmgmtlicenseinfotable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicenseinfoentry; //type: CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry> > clmgmtlicenseinfoentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicenseinfotable


class CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry : public ydk::Entity
{
    public:
        Clmgmtlicenseinfoentry();
        ~Clmgmtlicenseinfoentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtlicensestoreused; //type: uint32
        ydk::YLeaf clmgmtlicenseindex; //type: uint32
        ydk::YLeaf clmgmtlicensefeaturename; //type: string
        ydk::YLeaf clmgmtlicensefeatureversion; //type: string
        ydk::YLeaf clmgmtlicensetype; //type: Clmgmtlicensetype
        ydk::YLeaf clmgmtlicensecounted; //type: boolean
        ydk::YLeaf clmgmtlicensevalidityperiod; //type: uint32
        ydk::YLeaf clmgmtlicensevalidityperiodremaining; //type: uint32
        ydk::YLeaf clmgmtlicenseexpiredperiod; //type: uint32
        ydk::YLeaf clmgmtlicensemaxusagecount; //type: uint32
        ydk::YLeaf clmgmtlicenseusagecountremaining; //type: uint32
        ydk::YLeaf clmgmtlicenseeulastatus; //type: boolean
        ydk::YLeaf clmgmtlicensecomments; //type: string
        ydk::YLeaf clmgmtlicensestatus; //type: Clmgmtlicensestatus
        ydk::YLeaf clmgmtlicensestartdate; //type: string
        ydk::YLeaf clmgmtlicenseenddate; //type: string
        ydk::YLeaf clmgmtlicenseperiodused; //type: uint32
        class Clmgmtlicensetype;
        class Clmgmtlicensestatus;

}; // CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry


class CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable : public ydk::Entity
{
    public:
        Clmgmtlicensablefeaturetable();
        ~Clmgmtlicensablefeaturetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtlicensablefeatureentry; //type: CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry> > clmgmtlicensablefeatureentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable


class CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry : public ydk::Entity
{
    public:
        Clmgmtlicensablefeatureentry();
        ~Clmgmtlicensablefeatureentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtfeatureindex; //type: uint32
        ydk::YLeaf clmgmtfeaturename; //type: string
        ydk::YLeaf clmgmtfeatureversion; //type: string
        ydk::YLeaf clmgmtfeaturevalidityperiodremaining; //type: uint32
        ydk::YLeaf clmgmtfeaturewhatiscounted; //type: string
        ydk::YLeaf clmgmtfeaturestartdate; //type: string
        ydk::YLeaf clmgmtfeatureenddate; //type: string
        ydk::YLeaf clmgmtfeatureperiodused; //type: uint32

}; // CiscoLicenseMgmtMib::Clmgmtlicensablefeaturetable::Clmgmtlicensablefeatureentry


class CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable : public ydk::Entity
{
    public:
        Clmgmtdevcredexportactiontable();
        ~Clmgmtdevcredexportactiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Clmgmtdevcredexportactionentry; //type: CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry

        std::vector<std::shared_ptr<CISCO_LICENSE_MGMT_MIB::CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry> > clmgmtdevcredexportactionentry;
        
}; // CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable


class CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry : public ydk::Entity
{
    public:
        Clmgmtdevcredexportactionentry();
        ~Clmgmtdevcredexportactionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clmgmtdevcredexportactionindex; //type: uint32
        ydk::YLeaf clmgmtdevcredentphysicalindex; //type: int32
        ydk::YLeaf clmgmtdevcredtransferprotocol; //type: Clmgmtlicensetransferprotocol
        ydk::YLeaf clmgmtdevcredserveraddresstype; //type: Inetaddresstype
        ydk::YLeaf clmgmtdevcredserveraddress; //type: binary
        ydk::YLeaf clmgmtdevcredserverusername; //type: string
        ydk::YLeaf clmgmtdevcredserverpassword; //type: string
        ydk::YLeaf clmgmtdevcredexportfile; //type: string
        ydk::YLeaf clmgmtdevcredcommand; //type: Clmgmtdevcredcommand
        ydk::YLeaf clmgmtdevcredcommandstate; //type: Clmgmtlicenseactionstate
        ydk::YLeaf clmgmtdevcredcommandfailcause; //type: Clmgmtdevcredcommandfailcause
        ydk::YLeaf clmgmtdevcredstoragetype; //type: Storagetype
        ydk::YLeaf clmgmtdevcredrowstatus; //type: Rowstatus
        class Clmgmtdevcredcommand;
        class Clmgmtdevcredcommandfailcause;

}; // CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry

class Clmgmtlicenseactionfailcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf generalFailure;
        static const ydk::Enum::YLeaf transferProtocolNotSupported;
        static const ydk::Enum::YLeaf fileServerNotReachable;
        static const ydk::Enum::YLeaf unrecognizedEntPhysicalIndex;
        static const ydk::Enum::YLeaf invalidLicenseFilePath;
        static const ydk::Enum::YLeaf invalidLicenseFile;
        static const ydk::Enum::YLeaf invalidLicenseLine;
        static const ydk::Enum::YLeaf licenseAlreadyExists;
        static const ydk::Enum::YLeaf licenseNotValidForDevice;
        static const ydk::Enum::YLeaf invalidLicenseCount;
        static const ydk::Enum::YLeaf invalidLicensePeriod;
        static const ydk::Enum::YLeaf licenseInUse;
        static const ydk::Enum::YLeaf invalidLicenseStore;
        static const ydk::Enum::YLeaf licenseStorageFull;
        static const ydk::Enum::YLeaf invalidPermissionTicketFile;
        static const ydk::Enum::YLeaf invalidPermissionTicket;
        static const ydk::Enum::YLeaf invalidRehostTicketFile;
        static const ydk::Enum::YLeaf invalidRehostTicket;
        static const ydk::Enum::YLeaf invalidLicenseBackupFile;
        static const ydk::Enum::YLeaf licenseClearInProgress;
        static const ydk::Enum::YLeaf invalidLicenseEULAFile;

};

class Clmgmtlicensetransferprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class Clmgmtlicenseactionstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf partiallySuccessful;
        static const ydk::Enum::YLeaf failed;

};

class CiscoLicenseMgmtMib::Clmgmtlicensenotifobjects::Clmgmtlicenseerrornotifenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};

class CiscoLicenseMgmtMib::Clmgmtlicenseactiontable::Clmgmtlicenseactionentry::Clmgmtlicenseaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noOp;
        static const ydk::Enum::YLeaf install;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf processPermissionTicket;
        static const ydk::Enum::YLeaf regenerateLastRehostTicket;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf generateEULA;

};

class CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf demo;
        static const ydk::Enum::YLeaf extension;
        static const ydk::Enum::YLeaf gracePeriod;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf paidSubscription;
        static const ydk::Enum::YLeaf evaluationSubscription;
        static const ydk::Enum::YLeaf extensionSubscription;
        static const ydk::Enum::YLeaf evalRightToUse;
        static const ydk::Enum::YLeaf rightToUse;
        static const ydk::Enum::YLeaf permanentRightToUse;

};

class CiscoLicenseMgmtMib::Clmgmtlicenseinfotable::Clmgmtlicenseinfoentry::Clmgmtlicensestatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf notInUse;
        static const ydk::Enum::YLeaf inUse;
        static const ydk::Enum::YLeaf expiredInUse;
        static const ydk::Enum::YLeaf expiredNotInUse;
        static const ydk::Enum::YLeaf usageCountConsumed;

};

class CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noOp;
        static const ydk::Enum::YLeaf getDeviceCredentials;

};

class CiscoLicenseMgmtMib::Clmgmtdevcredexportactiontable::Clmgmtdevcredexportactionentry::Clmgmtdevcredcommandfailcause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf transferProtocolNotSupported;
        static const ydk::Enum::YLeaf fileServerNotReachable;
        static const ydk::Enum::YLeaf unrecognizedEntPhysicalIndex;
        static const ydk::Enum::YLeaf invalidFile;

};


}
}

#endif /* _CISCO_LICENSE_MGMT_MIB_ */

