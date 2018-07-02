#ifndef _CISCO_IMAGE_LICENSE_MGMT_MIB_
#define _CISCO_IMAGE_LICENSE_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IMAGE_LICENSE_MGMT_MIB {

class CISCOIMAGELICENSEMGMTMIB : public ydk::Entity
{
    public:
        CISCOIMAGELICENSEMGMTMIB();
        ~CISCOIMAGELICENSEMGMTMIB();

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

        class CiscoImageLicenseMgmtMIBObjects; //type: CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects
        class CilmNotifCntl; //type: CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl
        class CilmBootImageLevelTable; //type: CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable
        class CilmImageLevelToLicenseMapTable; //type: CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable

        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects> ciscoimagelicensemgmtmibobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl> cilmnotifcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable> cilmbootimageleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable> cilmimageleveltolicensemaptable;
        
}; // CISCOIMAGELICENSEMGMTMIB


class CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects : public ydk::Entity
{
    public:
        CiscoImageLicenseMgmtMIBObjects();
        ~CiscoImageLicenseMgmtMIBObjects();

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

        ydk::YLeaf cilmeulaaccepted; //type: boolean

}; // CISCOIMAGELICENSEMGMTMIB::CiscoImageLicenseMgmtMIBObjects


class CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl : public ydk::Entity
{
    public:
        CilmNotifCntl();
        ~CilmNotifCntl();

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

        ydk::YLeaf cilmimagelevelchangednotif; //type: boolean

}; // CISCOIMAGELICENSEMGMTMIB::CilmNotifCntl


class CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable : public ydk::Entity
{
    public:
        CilmBootImageLevelTable();
        ~CilmBootImageLevelTable();

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

        class CilmBootImageLevelEntry; //type: CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry

        ydk::YList cilmbootimagelevelentry;
        
}; // CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable


class CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry : public ydk::Entity
{
    public:
        CilmBootImageLevelEntry();
        ~CilmBootImageLevelEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cilmmodulename; //type: string
        ydk::YLeaf cilmcurrentimagelevel; //type: binary
        ydk::YLeaf cilmconfiguredbootimagelevel; //type: binary
        ydk::YLeaf cilmnextbootimagelevel; //type: binary
        ydk::YLeaf cilmcurrentlicensestoreindex; //type: uint32
        ydk::YLeaf cilmcurrentlicenseindex; //type: uint32
        ydk::YLeaf cilmnextbootlicensestoreindex; //type: uint32
        ydk::YLeaf cilmnextbootlicenseindex; //type: uint32

}; // CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry


class CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable : public ydk::Entity
{
    public:
        CilmImageLevelToLicenseMapTable();
        ~CilmImageLevelToLicenseMapTable();

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

        class CilmImageLevelToLicenseMapEntry; //type: CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry

        ydk::YList cilmimageleveltolicensemapentry;
        
}; // CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable


class CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry : public ydk::Entity
{
    public:
        CilmImageLevelToLicenseMapEntry();
        ~CilmImageLevelToLicenseMapEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: string (refers to cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::CilmBootImageLevelTable::CilmBootImageLevelEntry::cilmmodulename)
        ydk::YLeaf cilmmodulename;
        ydk::YLeaf cilmimagelicensemapindex; //type: uint32
        ydk::YLeaf cilmimagelicenseimagelevel; //type: binary
        ydk::YLeaf cilmimagelicensename; //type: binary
        ydk::YLeaf cilmimagelicensepriority; //type: uint32

}; // CISCOIMAGELICENSEMGMTMIB::CilmImageLevelToLicenseMapTable::CilmImageLevelToLicenseMapEntry


}
}

#endif /* _CISCO_IMAGE_LICENSE_MGMT_MIB_ */

