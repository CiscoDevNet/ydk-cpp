#ifndef _CISCO_IMAGE_LICENSE_MGMT_MIB_
#define _CISCO_IMAGE_LICENSE_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IMAGE_LICENSE_MGMT_MIB {

class CiscoImageLicenseMgmtMib : public Entity
{
    public:
        CiscoImageLicenseMgmtMib();
        ~CiscoImageLicenseMgmtMib();

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

        class Ciscoimagelicensemgmtmibobjects; //type: CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects
        class Cilmnotifcntl; //type: CiscoImageLicenseMgmtMib::Cilmnotifcntl
        class Cilmbootimageleveltable; //type: CiscoImageLicenseMgmtMib::Cilmbootimageleveltable
        class Cilmimageleveltolicensemaptable; //type: CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable

        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable> cilmbootimageleveltable_;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable> cilmimageleveltolicensemaptable_;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmnotifcntl> cilmnotifcntl_;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects> ciscoimagelicensemgmtmibobjects_;
        
}; // CiscoImageLicenseMgmtMib


class CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects : public Entity
{
    public:
        Ciscoimagelicensemgmtmibobjects();
        ~Ciscoimagelicensemgmtmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cilmeulaaccepted; //type: boolean

}; // CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects


class CiscoImageLicenseMgmtMib::Cilmnotifcntl : public Entity
{
    public:
        Cilmnotifcntl();
        ~Cilmnotifcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cilmimagelevelchangednotif; //type: boolean

}; // CiscoImageLicenseMgmtMib::Cilmnotifcntl


class CiscoImageLicenseMgmtMib::Cilmbootimageleveltable : public Entity
{
    public:
        Cilmbootimageleveltable();
        ~Cilmbootimageleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cilmbootimagelevelentry; //type: CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry

        std::vector<std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry> > cilmbootimagelevelentry_;
        
}; // CiscoImageLicenseMgmtMib::Cilmbootimageleveltable


class CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry : public Entity
{
    public:
        Cilmbootimagelevelentry();
        ~Cilmbootimagelevelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cilmmodulename; //type: string
        YLeaf cilmcurrentimagelevel; //type: binary
        YLeaf cilmconfiguredbootimagelevel; //type: binary
        YLeaf cilmnextbootimagelevel; //type: binary
        YLeaf cilmcurrentlicensestoreindex; //type: uint32
        YLeaf cilmcurrentlicenseindex; //type: uint32
        YLeaf cilmnextbootlicensestoreindex; //type: uint32
        YLeaf cilmnextbootlicenseindex; //type: uint32

}; // CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry


class CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable : public Entity
{
    public:
        Cilmimageleveltolicensemaptable();
        ~Cilmimageleveltolicensemaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cilmimageleveltolicensemapentry; //type: CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry

        std::vector<std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry> > cilmimageleveltolicensemapentry_;
        
}; // CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable


class CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry : public Entity
{
    public:
        Cilmimageleveltolicensemapentry();
        ~Cilmimageleveltolicensemapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        //type: string (refers to CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::cilmmodulename)
        YLeaf cilmmodulename;
        YLeaf cilmimagelicensemapindex; //type: uint32
        YLeaf cilmimagelicenseimagelevel; //type: binary
        YLeaf cilmimagelicensename; //type: binary
        YLeaf cilmimagelicensepriority; //type: uint32

}; // CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry


}
}

#endif /* _CISCO_IMAGE_LICENSE_MGMT_MIB_ */

