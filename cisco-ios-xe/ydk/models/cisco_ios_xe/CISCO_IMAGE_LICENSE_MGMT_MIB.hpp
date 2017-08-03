#ifndef _CISCO_IMAGE_LICENSE_MGMT_MIB_
#define _CISCO_IMAGE_LICENSE_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IMAGE_LICENSE_MGMT_MIB {

class CiscoImageLicenseMgmtMib : public ydk::Entity
{
    public:
        CiscoImageLicenseMgmtMib();
        ~CiscoImageLicenseMgmtMib();

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

        class Ciscoimagelicensemgmtmibobjects; //type: CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects
        class Cilmnotifcntl; //type: CiscoImageLicenseMgmtMib::Cilmnotifcntl
        class Cilmbootimageleveltable; //type: CiscoImageLicenseMgmtMib::Cilmbootimageleveltable
        class Cilmimageleveltolicensemaptable; //type: CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable

        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable> cilmbootimageleveltable;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable> cilmimageleveltolicensemaptable;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmnotifcntl> cilmnotifcntl;
        std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects> ciscoimagelicensemgmtmibobjects;
        
}; // CiscoImageLicenseMgmtMib


class CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects : public ydk::Entity
{
    public:
        Ciscoimagelicensemgmtmibobjects();
        ~Ciscoimagelicensemgmtmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cilmeulaaccepted; //type: boolean

}; // CiscoImageLicenseMgmtMib::Ciscoimagelicensemgmtmibobjects


class CiscoImageLicenseMgmtMib::Cilmnotifcntl : public ydk::Entity
{
    public:
        Cilmnotifcntl();
        ~Cilmnotifcntl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cilmimagelevelchangednotif; //type: boolean

}; // CiscoImageLicenseMgmtMib::Cilmnotifcntl


class CiscoImageLicenseMgmtMib::Cilmbootimageleveltable : public ydk::Entity
{
    public:
        Cilmbootimageleveltable();
        ~Cilmbootimageleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cilmbootimagelevelentry; //type: CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry

        std::vector<std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry> > cilmbootimagelevelentry;
        
}; // CiscoImageLicenseMgmtMib::Cilmbootimageleveltable


class CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry : public ydk::Entity
{
    public:
        Cilmbootimagelevelentry();
        ~Cilmbootimagelevelentry();

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
        ydk::YLeaf cilmmodulename; //type: string
        ydk::YLeaf cilmcurrentimagelevel; //type: binary
        ydk::YLeaf cilmconfiguredbootimagelevel; //type: binary
        ydk::YLeaf cilmnextbootimagelevel; //type: binary
        ydk::YLeaf cilmcurrentlicensestoreindex; //type: uint32
        ydk::YLeaf cilmcurrentlicenseindex; //type: uint32
        ydk::YLeaf cilmnextbootlicensestoreindex; //type: uint32
        ydk::YLeaf cilmnextbootlicenseindex; //type: uint32

}; // CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry


class CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable : public ydk::Entity
{
    public:
        Cilmimageleveltolicensemaptable();
        ~Cilmimageleveltolicensemaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cilmimageleveltolicensemapentry; //type: CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry

        std::vector<std::shared_ptr<CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry> > cilmimageleveltolicensemapentry;
        
}; // CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable


class CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry : public ydk::Entity
{
    public:
        Cilmimageleveltolicensemapentry();
        ~Cilmimageleveltolicensemapentry();

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
        //type: string (refers to CISCO_IMAGE_LICENSE_MGMT_MIB::CiscoImageLicenseMgmtMib::Cilmbootimageleveltable::Cilmbootimagelevelentry::cilmmodulename)
        ydk::YLeaf cilmmodulename;
        ydk::YLeaf cilmimagelicensemapindex; //type: uint32
        ydk::YLeaf cilmimagelicenseimagelevel; //type: binary
        ydk::YLeaf cilmimagelicensename; //type: binary
        ydk::YLeaf cilmimagelicensepriority; //type: uint32

}; // CiscoImageLicenseMgmtMib::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry


}
}

#endif /* _CISCO_IMAGE_LICENSE_MGMT_MIB_ */

