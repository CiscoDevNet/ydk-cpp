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

        class Ciscoimagelicensemgmtmibobjects; //type: CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects
        class Cilmnotifcntl; //type: CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl
        class Cilmbootimageleveltable; //type: CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable
        class Cilmimageleveltolicensemaptable; //type: CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable

        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable> cilmbootimageleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable> cilmimageleveltolicensemaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl> cilmnotifcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects> ciscoimagelicensemgmtmibobjects;
        
}; // CISCOIMAGELICENSEMGMTMIB


class CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable : public ydk::Entity
{
    public:
        Cilmbootimageleveltable();
        ~Cilmbootimageleveltable();

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

        class Cilmbootimagelevelentry; //type: CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry> > cilmbootimagelevelentry;
        
}; // CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable


class CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry : public ydk::Entity
{
    public:
        Cilmbootimagelevelentry();
        ~Cilmbootimagelevelentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cilmmodulename; //type: string
        ydk::YLeaf cilmcurrentimagelevel; //type: binary
        ydk::YLeaf cilmconfiguredbootimagelevel; //type: binary
        ydk::YLeaf cilmnextbootimagelevel; //type: binary
        ydk::YLeaf cilmcurrentlicensestoreindex; //type: uint32
        ydk::YLeaf cilmcurrentlicenseindex; //type: uint32
        ydk::YLeaf cilmnextbootlicensestoreindex; //type: uint32
        ydk::YLeaf cilmnextbootlicenseindex; //type: uint32

}; // CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry


class CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable : public ydk::Entity
{
    public:
        Cilmimageleveltolicensemaptable();
        ~Cilmimageleveltolicensemaptable();

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

        class Cilmimageleveltolicensemapentry; //type: CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry> > cilmimageleveltolicensemapentry;
        
}; // CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable


class CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry : public ydk::Entity
{
    public:
        Cilmimageleveltolicensemapentry();
        ~Cilmimageleveltolicensemapentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: string (refers to cisco_ios_xe::CISCO_IMAGE_LICENSE_MGMT_MIB::CISCOIMAGELICENSEMGMTMIB::Cilmbootimageleveltable::Cilmbootimagelevelentry::cilmmodulename)
        ydk::YLeaf cilmmodulename;
        ydk::YLeaf cilmimagelicensemapindex; //type: uint32
        ydk::YLeaf cilmimagelicenseimagelevel; //type: binary
        ydk::YLeaf cilmimagelicensename; //type: binary
        ydk::YLeaf cilmimagelicensepriority; //type: uint32

}; // CISCOIMAGELICENSEMGMTMIB::Cilmimageleveltolicensemaptable::Cilmimageleveltolicensemapentry


class CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl : public ydk::Entity
{
    public:
        Cilmnotifcntl();
        ~Cilmnotifcntl();

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

}; // CISCOIMAGELICENSEMGMTMIB::Cilmnotifcntl


class CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects : public ydk::Entity
{
    public:
        Ciscoimagelicensemgmtmibobjects();
        ~Ciscoimagelicensemgmtmibobjects();

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

}; // CISCOIMAGELICENSEMGMTMIB::Ciscoimagelicensemgmtmibobjects


}
}

#endif /* _CISCO_IMAGE_LICENSE_MGMT_MIB_ */

