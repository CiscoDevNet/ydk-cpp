#ifndef _CISCO_NX_OS_DEVICE_33_
#define _CISCO_NX_OS_DEVICE_33_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_32.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VnsegmentItems::ServiceItems::ServiceInstanceList


class System::FmItems::TacacsplusItems : public ydk::Entity
{
    public:
        TacacsplusItems();
        ~TacacsplusItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::TacacsplusItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TacacsplusItems::ServiceItems> service_items;
        
}; // System::FmItems::TacacsplusItems


class System::FmItems::TacacsplusItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TacacsplusItems::ServiceItems


class System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TacacsplusItems::ServiceItems::ServiceInstanceList


class System::FmItems::LdapItems : public ydk::Entity
{
    public:
        LdapItems();
        ~LdapItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::LdapItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::LdapItems::ServiceItems> service_items;
        
}; // System::FmItems::LdapItems


class System::FmItems::LdapItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::LdapItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::LdapItems::ServiceItems


class System::FmItems::LdapItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::LdapItems::ServiceItems::ServiceInstanceList


class System::FmItems::SchedulerItems : public ydk::Entity
{
    public:
        SchedulerItems();
        ~SchedulerItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::SchedulerItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SchedulerItems::ServiceItems> service_items;
        
}; // System::FmItems::SchedulerItems


class System::FmItems::SchedulerItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SchedulerItems::ServiceItems


class System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SchedulerItems::ServiceItems::ServiceInstanceList


class System::FmItems::ImpItems : public ydk::Entity
{
    public:
        ImpItems();
        ~ImpItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::ImpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ImpItems::ServiceItems> service_items;
        
}; // System::FmItems::ImpItems


class System::FmItems::ImpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::ImpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::ImpItems::ServiceItems


class System::FmItems::ImpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::ImpItems::ServiceItems::ServiceInstanceList


class System::FmItems::UdldItems : public ydk::Entity
{
    public:
        UdldItems();
        ~UdldItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::UdldItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::UdldItems::ServiceItems> service_items;
        
}; // System::FmItems::UdldItems


class System::FmItems::UdldItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::UdldItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::UdldItems::ServiceItems


class System::FmItems::UdldItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::UdldItems::ServiceItems::ServiceInstanceList


class System::FmItems::NatItems : public ydk::Entity
{
    public:
        NatItems();
        ~NatItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NatItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NatItems::ServiceItems> service_items;
        
}; // System::FmItems::NatItems


class System::FmItems::NatItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NatItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NatItems::ServiceItems


class System::FmItems::NatItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NatItems::ServiceItems::ServiceInstanceList


class System::FmItems::Vrrpv3Items : public ydk::Entity
{
    public:
        Vrrpv3Items();
        ~Vrrpv3Items();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::Vrrpv3Items::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Vrrpv3Items::ServiceItems> service_items;
        
}; // System::FmItems::Vrrpv3Items


class System::FmItems::Vrrpv3Items::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Vrrpv3Items::ServiceItems


class System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Vrrpv3Items::ServiceItems::ServiceInstanceList


class System::FmItems::VrrpItems : public ydk::Entity
{
    public:
        VrrpItems();
        ~VrrpItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VrrpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VrrpItems::ServiceItems> service_items;
        
}; // System::FmItems::VrrpItems


class System::FmItems::VrrpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VrrpItems::ServiceItems


class System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VrrpItems::ServiceItems::ServiceInstanceList


class System::FmItems::HsrpItems : public ydk::Entity
{
    public:
        HsrpItems();
        ~HsrpItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::HsrpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HsrpItems::ServiceItems> service_items;
        
}; // System::FmItems::HsrpItems


class System::FmItems::HsrpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::HsrpItems::ServiceItems


class System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::HsrpItems::ServiceItems::ServiceInstanceList


class System::FmItems::NetflowItems : public ydk::Entity
{
    public:
        NetflowItems();
        ~NetflowItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NetflowItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NetflowItems::ServiceItems> service_items;
        
}; // System::FmItems::NetflowItems


class System::FmItems::NetflowItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NetflowItems::ServiceItems


class System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NetflowItems::ServiceItems::ServiceInstanceList


class System::FmItems::AnalyticsItems : public ydk::Entity
{
    public:
        AnalyticsItems();
        ~AnalyticsItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::AnalyticsItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::AnalyticsItems::ServiceItems> service_items;
        
}; // System::FmItems::AnalyticsItems


class System::FmItems::AnalyticsItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::AnalyticsItems::ServiceItems


class System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::AnalyticsItems::ServiceItems::ServiceInstanceList


class System::FmItems::BfdItems : public ydk::Entity
{
    public:
        BfdItems();
        ~BfdItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::BfdItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::BfdItems::ServiceItems> service_items;
        
}; // System::FmItems::BfdItems


class System::FmItems::BfdItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::BfdItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::BfdItems::ServiceItems


class System::FmItems::BfdItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::BfdItems::ServiceItems::ServiceInstanceList


class System::FmItems::TunnelifItems : public ydk::Entity
{
    public:
        TunnelifItems();
        ~TunnelifItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::TunnelifItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TunnelifItems::ServiceItems> service_items;
        
}; // System::FmItems::TunnelifItems


class System::FmItems::TunnelifItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TunnelifItems::ServiceItems


class System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TunnelifItems::ServiceItems::ServiceInstanceList


class System::FmItems::NvoItems : public ydk::Entity
{
    public:
        NvoItems();
        ~NvoItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NvoItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NvoItems::ServiceItems> service_items;
        
}; // System::FmItems::NvoItems


class System::FmItems::NvoItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NvoItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NvoItems::ServiceItems


class System::FmItems::NvoItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NvoItems::ServiceItems::ServiceInstanceList


class System::FmItems::PbrItems : public ydk::Entity
{
    public:
        PbrItems();
        ~PbrItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PbrItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PbrItems::ServiceItems> service_items;
        
}; // System::FmItems::PbrItems


class System::FmItems::PbrItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::PbrItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PbrItems::ServiceItems


class System::FmItems::PbrItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PbrItems::ServiceItems::ServiceInstanceList


class System::FmItems::PimItems : public ydk::Entity
{
    public:
        PimItems();
        ~PimItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PimItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PimItems::ServiceItems> service_items;
        
}; // System::FmItems::PimItems


class System::FmItems::PimItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::PimItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PimItems::ServiceItems


class System::FmItems::PimItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PimItems::ServiceItems::ServiceInstanceList


class System::FmItems::NgmvpnItems : public ydk::Entity
{
    public:
        NgmvpnItems();
        ~NgmvpnItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NgmvpnItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NgmvpnItems::ServiceItems> service_items;
        
}; // System::FmItems::NgmvpnItems


class System::FmItems::NgmvpnItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NgmvpnItems::ServiceItems


class System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NgmvpnItems::ServiceItems::ServiceInstanceList


class System::FmItems::VpcItems : public ydk::Entity
{
    public:
        VpcItems();
        ~VpcItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VpcItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VpcItems::ServiceItems> service_items;
        
}; // System::FmItems::VpcItems


class System::FmItems::VpcItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::VpcItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VpcItems::ServiceItems


class System::FmItems::VpcItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VpcItems::ServiceItems::ServiceInstanceList


class System::FmItems::VtpItems : public ydk::Entity
{
    public:
        VtpItems();
        ~VtpItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::VtpItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::VtpItems::ServiceItems> service_items;
        
}; // System::FmItems::VtpItems


class System::FmItems::VtpItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::VtpItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::VtpItems::ServiceItems


class System::FmItems::VtpItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::VtpItems::ServiceItems::ServiceInstanceList


class System::FmItems::PvlanItems : public ydk::Entity
{
    public:
        PvlanItems();
        ~PvlanItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::PvlanItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PvlanItems::ServiceItems> service_items;
        
}; // System::FmItems::PvlanItems


class System::FmItems::PvlanItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PvlanItems::ServiceItems


class System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PvlanItems::ServiceItems::ServiceInstanceList


class System::FmItems::NtpdItems : public ydk::Entity
{
    public:
        NtpdItems();
        ~NtpdItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::NtpdItems


class System::FmItems::NbmItems : public ydk::Entity
{
    public:
        NbmItems();
        ~NbmItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::NbmItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NbmItems::ServiceItems> service_items;
        
}; // System::FmItems::NbmItems


class System::FmItems::NbmItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NbmItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NbmItems::ServiceItems


class System::FmItems::NbmItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NbmItems::ServiceItems::ServiceInstanceList


class System::FmItems::TelemetryItems : public ydk::Entity
{
    public:
        TelemetryItems();
        ~TelemetryItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::TelemetryItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::TelemetryItems::ServiceItems> service_items;
        
}; // System::FmItems::TelemetryItems


class System::FmItems::TelemetryItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::TelemetryItems::ServiceItems


class System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::TelemetryItems::ServiceItems::ServiceInstanceList


class System::FmItems::OspfItems : public ydk::Entity
{
    public:
        OspfItems();
        ~OspfItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::OspfItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::OspfItems::ServiceItems> service_items;
        
}; // System::FmItems::OspfItems


class System::FmItems::OspfItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::OspfItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::OspfItems::ServiceItems


class System::FmItems::OspfItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::OspfItems::ServiceItems::ServiceInstanceList


class System::FmItems::Ospfv3Items : public ydk::Entity
{
    public:
        Ospfv3Items();
        ~Ospfv3Items();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::Ospfv3Items::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Ospfv3Items::ServiceItems> service_items;
        
}; // System::FmItems::Ospfv3Items


class System::FmItems::Ospfv3Items::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Ospfv3Items::ServiceItems


class System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Ospfv3Items::ServiceItems::ServiceInstanceList


class System::FmItems::VctrlItems : public ydk::Entity
{
    public:
        VctrlItems();
        ~VctrlItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState

}; // System::FmItems::VctrlItems


class System::FmItems::MacsecItems : public ydk::Entity
{
    public:
        MacsecItems();
        ~MacsecItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::MacsecItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::MacsecItems::ServiceItems> service_items;
        
}; // System::FmItems::MacsecItems


class System::FmItems::MacsecItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::MacsecItems::ServiceItems


class System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList


class System::FmItems::NpivItems : public ydk::Entity
{
    public:
        NpivItems();
        ~NpivItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::NpivItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::NpivItems::ServiceItems> service_items;
        
}; // System::FmItems::NpivItems


class System::FmItems::NpivItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::NpivItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::NpivItems::ServiceItems


class System::FmItems::NpivItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::NpivItems::ServiceItems::ServiceInstanceList


class System::FmItems::Pim6Items : public ydk::Entity
{
    public:
        Pim6Items();
        ~Pim6Items();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::Pim6Items::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::Pim6Items::ServiceItems> service_items;
        
}; // System::FmItems::Pim6Items


class System::FmItems::Pim6Items::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::Pim6Items::ServiceItems


class System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList


class System::FmItems::IsisItems : public ydk::Entity
{
    public:
        IsisItems();
        ~IsisItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::IsisItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::IsisItems::ServiceItems> service_items;
        
}; // System::FmItems::IsisItems


class System::FmItems::IsisItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::IsisItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::IsisItems::ServiceItems


class System::FmItems::IsisItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::IsisItems::ServiceItems::ServiceInstanceList


class System::FmItems::HwtelemetryItems : public ydk::Entity
{
    public:
        HwtelemetryItems();
        ~HwtelemetryItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::HwtelemetryItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::HwtelemetryItems::ServiceItems> service_items;
        
}; // System::FmItems::HwtelemetryItems


class System::FmItems::HwtelemetryItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::HwtelemetryItems::ServiceItems


class System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList


class System::FmItems::ItdItems : public ydk::Entity
{
    public:
        ItdItems();
        ~ItdItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::ItdItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::ItdItems::ServiceItems> service_items;
        
}; // System::FmItems::ItdItems


class System::FmItems::ItdItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::ItdItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::ItdItems::ServiceItems


class System::FmItems::ItdItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::ItdItems::ServiceItems::ServiceInstanceList


class System::FmItems::PortsecItems : public ydk::Entity
{
    public:
        PortsecItems();
        ~PortsecItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::PortsecItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::PortsecItems::ServiceItems> service_items;
        
}; // System::FmItems::PortsecItems


class System::FmItems::PortsecItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::PortsecItems::ServiceItems


class System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList


class System::FmItems::FlexlinkItems : public ydk::Entity
{
    public:
        FlexlinkItems();
        ~FlexlinkItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        ydk::YLeaf maxinstance; //type: uint32
        class ServiceItems; //type: System::FmItems::FlexlinkItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::FlexlinkItems::ServiceItems> service_items;
        
}; // System::FmItems::FlexlinkItems


class System::FmItems::FlexlinkItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::FlexlinkItems::ServiceItems


class System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::FlexlinkItems::ServiceItems::ServiceInstanceList


class System::FmItems::SlasenderItems : public ydk::Entity
{
    public:
        SlasenderItems();
        ~SlasenderItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::SlasenderItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlasenderItems::ServiceItems> service_items;
        
}; // System::FmItems::SlasenderItems


class System::FmItems::SlasenderItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SlasenderItems::ServiceItems


class System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SlasenderItems::ServiceItems::ServiceInstanceList


class System::FmItems::SlaresponderItems : public ydk::Entity
{
    public:
        SlaresponderItems();
        ~SlaresponderItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::SlaresponderItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlaresponderItems::ServiceItems> service_items;
        
}; // System::FmItems::SlaresponderItems


class System::FmItems::SlaresponderItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SlaresponderItems::ServiceItems


class System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SlaresponderItems::ServiceItems::ServiceInstanceList


class System::FmItems::SlatwampserverItems : public ydk::Entity
{
    public:
        SlatwampserverItems();
        ~SlatwampserverItems();

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

        ydk::YLeaf adminst; //type: FmAdminState
        ydk::YLeaf operst; //type: FmOperState
        class ServiceItems; //type: System::FmItems::SlatwampserverItems::ServiceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FmItems::SlatwampserverItems::ServiceItems> service_items;
        
}; // System::FmItems::SlatwampserverItems


class System::FmItems::SlatwampserverItems::ServiceItems : public ydk::Entity
{
    public:
        ServiceItems();
        ~ServiceItems();

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

        class ServiceInstanceList; //type: System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList

        ydk::YList serviceinstance_list;
        
}; // System::FmItems::SlatwampserverItems::ServiceItems


class System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList : public ydk::Entity
{
    public:
        ServiceInstanceList();
        ~ServiceInstanceList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: FmInstOperState

}; // System::FmItems::SlatwampserverItems::ServiceItems::ServiceInstanceList


class System::FsetItems : public ydk::Entity
{
    public:
        FsetItems();
        ~FsetItems();

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

        class FeatureSetList; //type: System::FsetItems::FeatureSetList

        ydk::YList featureset_list;
        
}; // System::FsetItems


class System::FsetItems::FeatureSetList : public ydk::Entity
{
    public:
        FeatureSetList();
        ~FeatureSetList();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: FsetAdminState
        ydk::YLeaf force; //type: boolean
        ydk::YLeaf operst; //type: FsetOperState

}; // System::FsetItems::FeatureSetList


class System::InstallItems : public ydk::Entity
{
    public:
        InstallItems();
        ~InstallItems();

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

        ydk::YLeaf imgpath; //type: string
        ydk::YLeaf imgname; //type: string
        ydk::YLeaf operation_; //type: InstallerInstOper
        ydk::YLeaf installtype; //type: InstallerInstType
        ydk::YLeaf packagepath; //type: string
        ydk::YLeaf packagename; //type: string
        ydk::YLeaf override; //type: InstallerInstEnum
        ydk::YLeaf biosforce; //type: InstallerInstEnum
        ydk::YLeaf stage; //type: InstallerStage
        ydk::YLeaf upgerr; //type: InstallerInstErr
        ydk::YLeaf upgerrstr; //type: string
        class ModItems; //type: System::InstallItems::ModItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstallItems::ModItems> mod_items;
        
}; // System::InstallItems


class System::InstallItems::ModItems : public ydk::Entity
{
    public:
        ModItems();
        ~ModItems();

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

        class InstallUpgTableList; //type: System::InstallItems::ModItems::InstallUpgTableList

        ydk::YList installupgtable_list;
        
}; // System::InstallItems::ModItems


class System::InstallItems::ModItems::InstallUpgTableList : public ydk::Entity
{
    public:
        InstallUpgTableList();
        ~InstallUpgTableList();

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

        ydk::YLeaf module; //type: uint32
        class ModtypeItems; //type: System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems> modtype_items;
        
}; // System::InstallItems::ModItems::InstallUpgTableList


class System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems : public ydk::Entity
{
    public:
        ModtypeItems();
        ~ModtypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ModUpgTableList; //type: System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList

        ydk::YList modupgtable_list;
        
}; // System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems


class System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList : public ydk::Entity
{
    public:
        ModUpgTableList();
        ~ModUpgTableList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modtype; //type: InstallerInstModType
        ydk::YLeaf module; //type: uint32
        ydk::YLeaf runver; //type: string
        ydk::YLeaf targetver; //type: string
        ydk::YLeaf upgreq; //type: InstallerInstEnum
        ydk::YLeaf upgstatus; //type: InstallerUpgStatusType
        ydk::YLeaf failstr; //type: string

}; // System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList


class System::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

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

        ydk::YLeaf descr; //type: string
        class PhysItems; //type: System::IntfItems::PhysItems
        class AggrItems; //type: System::IntfItems::AggrItems
        class RtdItems; //type: System::IntfItems::RtdItems
        class LbItems; //type: System::IntfItems::LbItems
        class EncrtdItems; //type: System::IntfItems::EncrtdItems
        class SviItems; //type: System::IntfItems::SviItems
        class TunnelifItems; //type: System::IntfItems::TunnelifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems> phys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::AggrItems> aggr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::RtdItems> rtd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::LbItems> lb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::EncrtdItems> encrtd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::SviItems> svi_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::TunnelifItems> tunnelif_items;
        
}; // System::IntfItems


class System::IntfItems::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

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

        class PhysIfList; //type: System::IntfItems::PhysItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::IntfItems::PhysItems


class System::IntfItems::PhysItems::PhysIfList : public ydk::Entity
{
    public:
        PhysIfList();
        ~PhysIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf linktransmitreset; //type: L1LinkTransmitReset
        ydk::YLeaf linkdebouncelinkup; //type: uint16
        ydk::YLeaf dfetuningdelay; //type: uint16
        ydk::YLeaf packettimestampstate; //type: L1PacketTimestampState
        ydk::YLeaf packettimestampingresssourceid; //type: uint32
        ydk::YLeaf packettimestampegresssourceid; //type: uint32
        ydk::YLeaf speedgroup; //type: L1SpeedGroup
        ydk::YLeaf beacon; //type: L1Beacon
        ydk::YLeaf voicevlanid; //type: uint16
        ydk::YLeaf voicevlantype; //type: L1VoiceVlanType
        ydk::YLeaf voiceportcos; //type: int8
        ydk::YLeaf voiceporttrust; //type: int8
        ydk::YLeaf fecmode; //type: L1FECMode
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf switchingst; //type: L1SwitchingSt
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf speed; //type: L1Speed
        ydk::YLeaf duplex; //type: L1Duplex
        ydk::YLeaf autoneg; //type: L1AutoNeg
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf snmptrapst; //type: L1SnmpTrapSt
        ydk::YLeaf mode; //type: L1Mode
        ydk::YLeaf layer; //type: L1Layer
        ydk::YLeaf mdix; //type: L1Mdix
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf linkdebounce; //type: uint16
        ydk::YLeaf dot1qethertype; //type: uint32
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf medium; //type: L1Medium
        ydk::YLeaf inhbw; //type: uint32
        ydk::YLeaf spanmode; //type: L1SpanMode
        ydk::YLeaf linklog; //type: L1LinkLog
        ydk::YLeaf trunklog; //type: L1TrunkLog
        ydk::YLeaf routermac; //type: string
        ydk::YLeaf portt; //type: EqptPortT
        ydk::YLeaf usage; //type: string
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf usercfgdflags; //type: string
        class NfmphysifItems; //type: System::IntfItems::PhysItems::PhysIfList::NfmphysifItems
        class PriorflowctrlItems; //type: System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems
        class PriorflowctrlwdItems; //type: System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems
        class PhysExtdItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems
        class EeepItems; //type: System::IntfItems::PhysItems::PhysIfList::EeepItems
        class StormctrlpItems; //type: System::IntfItems::PhysItems::PhysIfList::StormctrlpItems
        class LoadpItems; //type: System::IntfItems::PhysItems::PhysIfList::LoadpItems
        class VlanmappingItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems
        class VrfItems; //type: System::IntfItems::PhysItems::PhysIfList::VrfItems
        class PhysItems_; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_
        class HwifdetailsItems; //type: System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems
        class AggrmbrifItems; //type: System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems
        class MultisiteiftrackingItems; //type: System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems
        class DomItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems
        class RtInbandConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems
        class RtextConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtextConfItems
        class RtbrConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtbrConfItems
        class RtfvNodePortAttItems; //type: System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems
        class RtmbrIfsItems; //type: System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems
        class RtvrfMbrItems; //type: System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems
        class RtphysRtdConfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems
        class Rtl3EncPhysRtdConfItems; //type: System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems
        class RtnwPathToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems
        class RttunnelTunnelMbrIfsItems; //type: System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems
        class RtLsNodeToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems
        class DbgIfInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfInItems
        class DbgIfOutItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems
        class DbgIpInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIpInItems
        class DbgDot1dItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems
        class DbgEtherStatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems
        class DbgDot3StatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems
        class DbgIfHCInItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems
        class DbgIfHCOutItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems
        class DbgIpv6IfStatsItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems
        class DbgIfStormItems; //type: System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::NfmphysifItems> nfmphysif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems> priorflowctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems> priorflowctrlwd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems> physextd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::EeepItems> eeep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::StormctrlpItems> stormctrlp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::LoadpItems> loadp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems> vlanmapping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_> phys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems> hwifdetails_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems> aggrmbrif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems> multisiteiftracking_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems> rtinbandconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtextConfItems> rtextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtbrConfItems> rtbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems> rtfvnodeportatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems> rtmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems> rtphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems> rtl3encphysrtdconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems> rttunneltunnelmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems> rtlsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfInItems> dbgifin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems> dbgifout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIpInItems> dbgipin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems> dbgdot1d_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems> dbgetherstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems> dbgdot3stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems> dbgifhcin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems> dbgifhcout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems> dbgipv6ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems> dbgifstorm_items;
        
}; // System::IntfItems::PhysItems::PhysIfList


class System::IntfItems::PhysItems::PhysIfList::NfmphysifItems : public ydk::Entity
{
    public:
        NfmphysifItems();
        ~NfmphysifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slicesrcid; //type: uint32
        ydk::YLeaf slotnum; //type: uint32
        ydk::YLeaf asicnum; //type: uint32
        ydk::YLeaf slicenum; //type: uint32

}; // System::IntfItems::PhysItems::PhysIfList::NfmphysifItems


class System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems : public ydk::Entity
{
    public:
        PriorflowctrlItems();
        ~PriorflowctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: uint8
        ydk::YLeaf send_tlv; //type: boolean

}; // System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems


class System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems : public ydk::Entity
{
    public:
        PriorflowctrlwdItems();
        ~PriorflowctrlwdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf watchdoginterval; //type: uint8
        ydk::YLeaf disableaction; //type: boolean
        ydk::YLeaf interfacemutiplier; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems : public ydk::Entity
{
    public:
        PhysExtdItems();
        ~PhysExtdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf porttypefabric; //type: L1PortTypeFabric
        ydk::YLeaf routermacipv6extract; //type: L1RouterMacIpv6Extract
        ydk::YLeaf switchportblock; //type: string
        ydk::YLeaf switchportisolated; //type: L1SwitchportIsolated
        ydk::YLeaf switchportmaclearn; //type: L1SwitchportMacLearn
        ydk::YLeaf flowctrl; //type: string
        ydk::YLeaf stormctrlbcastlevel; //type: decimal64
        ydk::YLeaf stormctrlbcastpps; //type: uint32
        ydk::YLeaf stormctrlmcastlevel; //type: decimal64
        ydk::YLeaf stormctrlmcastpps; //type: uint32
        ydk::YLeaf stormctrlucastlevel; //type: decimal64
        ydk::YLeaf stormctrlucastpps; //type: uint32
        ydk::YLeaf stormctrlact; //type: string
        ydk::YLeaf bufferboost; //type: L1BufferBoost
        ydk::YLeaf switchportvirtualethernetbridge; //type: L1SwitchportVirtualEthernetBridge
        ydk::YLeaf allowmultitag; //type: L1AllowMultiTag
        class RtvrfMbrItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems


class System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList


class System::IntfItems::PhysItems::PhysIfList::EeepItems : public ydk::Entity
{
    public:
        EeepItems();
        ~EeepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eeestate; //type: L1EEEState
        ydk::YLeaf eeelpi; //type: L1EEELpi
        ydk::YLeaf eeelat; //type: L1EEELatency
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::EeepItems


class System::IntfItems::PhysItems::PhysIfList::StormctrlpItems : public ydk::Entity
{
    public:
        StormctrlpItems();
        ~StormctrlpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: L1PktT
        ydk::YLeaf rate; //type: decimal64
        ydk::YLeaf burstrate; //type: decimal64
        ydk::YLeaf ratepps; //type: uint32
        ydk::YLeaf burstpps; //type: uint32

}; // System::IntfItems::PhysItems::PhysIfList::StormctrlpItems


class System::IntfItems::PhysItems::PhysIfList::LoadpItems : public ydk::Entity
{
    public:
        LoadpItems();
        ~LoadpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loadintvl1; //type: uint16
        ydk::YLeaf loadintvl2; //type: uint16
        ydk::YLeaf loadintvl3; //type: uint16

}; // System::IntfItems::PhysItems::PhysIfList::LoadpItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems : public ydk::Entity
{
    public:
        VlanmappingItems();
        ~VlanmappingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: boolean
        class VlantranslatetableItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems> vlantranslatetable_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems : public ydk::Entity
{
    public:
        VlantranslatetableItems();
        ~VlantranslatetableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanItems; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems> vlan_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanTranslateEntryList; //type: System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList

        ydk::YList vlantranslateentry_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems


class System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList : public ydk::Entity
{
    public:
        VlanTranslateEntryList();
        ~VlanTranslateEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: string
        ydk::YLeaf innervlanid; //type: string
        ydk::YLeaf translatevlanid; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList


class System::IntfItems::PhysItems::PhysIfList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::VrfItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_ : public ydk::Entity
{
    public:
        PhysItems_();
        ~PhysItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operlinkdebounce; //type: uint16
        ydk::YLeaf sharestate; //type: EthpmShareState
        ydk::YLeaf operfecmode; //type: L1FECModePhysIfOperFECMode
        ydk::YLeaf cachedusercfgdflags; //type: string
        ydk::YLeaf ifindex; //type: uint32
        ydk::YLeaf operautoneg; //type: L1AutoNeg
        ydk::YLeaf opermtu; //type: uint32
        ydk::YLeaf adminst; //type: L1AdminSt
        ydk::YLeaf operdescr; //type: string
        ydk::YLeaf operst; //type: L1OperSt
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf operstqualcode; //type: uint32
        ydk::YLeaf opererrdisqual; //type: L1OperStQual_
        ydk::YLeaf operspeed; //type: L1Speed
        ydk::YLeaf opermode; //type: L1Mode
        ydk::YLeaf operduplex; //type: L1Duplex
        ydk::YLeaf operflowctrl; //type: string
        ydk::YLeaf operphyenst; //type: L1OperSt
        ydk::YLeaf backplanemac; //type: string
        ydk::YLeaf operroutermac; //type: string
        ydk::YLeaf txt; //type: L1TxT
        ydk::YLeaf lastlinkstchg; //type: one of uint64, string
        ydk::YLeaf portcfgwaitflags; //type: uint32
        ydk::YLeaf accessvlan; //type: string
        ydk::YLeaf nativevlan; //type: string
        ydk::YLeaf cfgnativevlan; //type: string
        ydk::YLeaf cfgaccessvlan; //type: string
        ydk::YLeaf primaryvlan; //type: string
        ydk::YLeaf operbitset; //type: string
        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf resetctr; //type: uint32
        ydk::YLeaf media; //type: uint32
        ydk::YLeaf encap; //type: uint32
        ydk::YLeaf iod; //type: uint64
        ydk::YLeaf allowedvlans; //type: string
        ydk::YLeaf opervlans; //type: string
        ydk::YLeaf errvlans; //type: string
        ydk::YLeaf opertrunkstatus; //type: EthpmTrunkStatus
        ydk::YLeaf bundleindex; //type: string
        ydk::YLeaf opermdix; //type: L1Mdix
        ydk::YLeaf currerrindex; //type: uint32
        ydk::YLeaf lasterrors; //type: string
        ydk::YLeaf errdistimerrunning; //type: boolean
        ydk::YLeaf bundlebupid; //type: uint32
        ydk::YLeaf operdcemode; //type: L1DceMode
        ydk::YLeaf intft; //type: L1IntfT
        ydk::YLeaf diags; //type: L1DiagsT
        ydk::YLeaf opereeestate; //type: L1EEEState
        ydk::YLeaf opereeetxwktime; //type: uint32
        ydk::YLeaf opereeerxwktime; //type: uint32
        ydk::YLeaf usercfgdflags; //type: string
        ydk::YLeaf numofsi; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf silist; //type: string
        ydk::YLeaf dynamicvlan; //type: boolean
        ydk::YLeaf usage; //type: string
        class FcotItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems
        class Fcotx2Items; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items
        class FcotddItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems
        class PortcapItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems> fcot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items> fcotx2_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems> fcotdd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems> portcap_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems : public ydk::Entity
{
    public:
        FcotItems();
        ~FcotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrid; //type: uint8
        ydk::YLeaf xcvrextid; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf xcvrcode; //type: string
        ydk::YLeaf encoding; //type: uint8
        ydk::YLeaf brin100mhz; //type: uint8
        ydk::YLeaf baseresvd1; //type: uint8
        ydk::YLeaf distinkmfor9u; //type: uint8
        ydk::YLeaf distin100mfor9u; //type: uint8
        ydk::YLeaf distin10mfor50u; //type: uint8
        ydk::YLeaf distin10mfor60u; //type: uint8
        ydk::YLeaf distin1mforcu; //type: uint8
        ydk::YLeaf baseresvd2; //type: uint8
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf baseresvd3; //type: uint8
        ydk::YLeaf vendorid; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf baseresvd4; //type: string
        ydk::YLeaf ccid; //type: uint8
        ydk::YLeaf extoption; //type: string
        ydk::YLeaf brmaxmargin; //type: uint8
        ydk::YLeaf brminmargin; //type: uint8
        ydk::YLeaf vendorsn; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf diagmontype; //type: uint8
        ydk::YLeaf enhoption; //type: uint8
        ydk::YLeaf sff8472compl; //type: uint8
        ydk::YLeaf ccex; //type: uint8
        ydk::YLeaf vendordata; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8
        class LaneItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems
        class DomstatsItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems> lane_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems> domstats_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems : public ydk::Entity
{
    public:
        LaneItems();
        ~LaneItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FcotSensorList; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList

        ydk::YList fcotsensor_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList : public ydk::Entity
{
    public:
        FcotSensorList();
        ~FcotSensorList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf laneid; //type: uint16
        ydk::YLeaf sensorid; //type: uint16
        ydk::YLeaf lanetype; //type: EqptFcotDomLane
        ydk::YLeaf description; //type: string
        ydk::YLeaf unit; //type: string
        ydk::YLeaf value_; //type: decimal64
        ydk::YLeaf highalarm; //type: decimal64
        ydk::YLeaf highwarning; //type: decimal64
        ydk::YLeaf lowalarm; //type: decimal64
        ydk::YLeaf lowwarning; //type: decimal64
        ydk::YLeaf max; //type: decimal64
        ydk::YLeaf min; //type: decimal64
        ydk::YLeaf avg; //type: decimal64
        ydk::YLeaf instant; //type: decimal64
        ydk::YLeaf alert; //type: EqptFcotDomAlert

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems : public ydk::Entity
{
    public:
        DomstatsItems();
        ~DomstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf numlanes; //type: uint16
        class LaneItems; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems> lane_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems : public ydk::Entity
{
    public:
        LaneItems();
        ~LaneItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FcotLaneList; //type: System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList

        ydk::YList fcotlane_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList : public ydk::Entity
{
    public:
        FcotLaneList();
        ~FcotLaneList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf laneid; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf transmitfaultcount; //type: uint64

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::DomstatsItems::LaneItems::FcotLaneList


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items : public ydk::Entity
{
    public:
        Fcotx2Items();
        ~Fcotx2Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrtype; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf bitencoding; //type: uint8
        ydk::YLeaf bitratembps; //type: string
        ydk::YLeaf protocoltype; //type: uint8
        ydk::YLeaf xgethcode; //type: string
        ydk::YLeaf sonetsdhcode; //type: string
        ydk::YLeaf xgfccode; //type: string
        ydk::YLeaf range; //type: string
        ydk::YLeaf fibretype; //type: string
        ydk::YLeaf wavelench0; //type: string
        ydk::YLeaf wavelench1; //type: string
        ydk::YLeaf wavelench2; //type: string
        ydk::YLeaf wavelench3; //type: string
        ydk::YLeaf packageoui; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf lotcode; //type: string
        ydk::YLeaf fivevstressenv; //type: uint8
        ydk::YLeaf threethreevstressenv; //type: uint8
        ydk::YLeaf apsstressenv; //type: uint8
        ydk::YLeaf normalapsvolt; //type: uint8
        ydk::YLeaf diagoptmoncap; //type: uint8
        ydk::YLeaf lowpwrstartupcap; //type: uint8
        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf checksum; //type: uint8
        ydk::YLeaf ciscopid; //type: string
        ydk::YLeaf ciscovid; //type: string
        ydk::YLeaf ciscosn; //type: string
        ydk::YLeaf ciscopn; //type: string
        ydk::YLeaf ciscorev; //type: string
        ydk::YLeaf extvendorspecific; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems : public ydk::Entity
{
    public:
        FcotddItems();
        ~FcotddItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrtype; //type: uint8
        ydk::YLeaf verid; //type: uint8
        ydk::YLeaf modadvcode; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf lotcode; //type: string
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf diagoptmoncap; //type: uint8
        ydk::YLeaf checksum; //type: uint8
        ydk::YLeaf ciscopid; //type: string
        ydk::YLeaf ciscovid; //type: string
        ydk::YLeaf ciscosn; //type: string
        ydk::YLeaf ciscopn; //type: string
        ydk::YLeaf ciscorev; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotddItems


class System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems : public ydk::Entity
{
    public:
        PortcapItems();
        ~PortcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf duplex; //type: string
        ydk::YLeaf trunkencap; //type: uint8
        ydk::YLeaf channel; //type: uint8
        ydk::YLeaf suppression; //type: uint8
        ydk::YLeaf rxflowcontrol; //type: uint8
        ydk::YLeaf txflowcontrol; //type: uint8
        ydk::YLeaf cosrewrite; //type: uint8
        ydk::YLeaf tosrewrite; //type: uint8
        ydk::YLeaf span; //type: uint8
        ydk::YLeaf udld; //type: uint8
        ydk::YLeaf autoneg; //type: uint8
        ydk::YLeaf linkdebounce; //type: uint8
        ydk::YLeaf linkdebouncetime; //type: uint8
        ydk::YLeaf fcotcapable; //type: uint8
        ydk::YLeaf ratemode; //type: uint8
        ydk::YLeaf mdix; //type: uint8
        ydk::YLeaf portgroup; //type: uint8
        ydk::YLeaf ctscapable; //type: uint8
        ydk::YLeaf qosrxprio; //type: uint8
        ydk::YLeaf qosrxqueue; //type: uint8
        ydk::YLeaf qosrxthold; //type: uint8
        ydk::YLeaf qostxprio; //type: uint8
        ydk::YLeaf qostxqueue; //type: uint8
        ydk::YLeaf qostxthold; //type: uint8
        ydk::YLeaf model; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf portgrpmbrs; //type: string
        ydk::YLeaf protosupport; //type: uint32
        ydk::YLeaf portcap; //type: uint32
        ydk::YLeaf eeecapval; //type: uint16
        ydk::YLeaf eeewaketimes10g; //type: string
        ydk::YLeaf eeeflapflags; //type: uint16

}; // System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems


class System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems : public ydk::Entity
{
    public:
        HwifdetailsItems();
        ~HwifdetailsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice; //type: uint32
        ydk::YLeaf sport; //type: uint32
        ydk::YLeaf vif; //type: uint32

}; // System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems


class System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems : public ydk::Entity
{
    public:
        AggrmbrifItems();
        ~AggrmbrifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: PcOperSt
        ydk::YLeaf channelingst; //type: PcChannelingSt
        ydk::YLeaf summoperst; //type: PcSummOperSt
        ydk::YLeaf uptime; //type: one of uint64, string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf bdlportnum; //type: uint32
        ydk::YLeaf ltlprogrammed; //type: boolean
        ydk::YLeaf name; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems


class System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems : public ydk::Entity
{
    public:
        MultisiteiftrackingItems();
        ~MultisiteiftrackingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tracking; //type: NvoMultisiteTrackingT

}; // System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems


class System::IntfItems::PhysItems::PhysIfList::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomDefList; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList

        ydk::YList domdef_list;
        
}; // System::IntfItems::PhysItems::PhysIfList::DomItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList : public ydk::Entity
{
    public:
        DomDefList();
        ~DomDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dompkey; //type: string
        ydk::YLeaf instrimedcy; //type: FvImmediacy_
        ydk::YLeaf name; //type: string
        class RsdomDefNsItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems
        class RsdomDefNsLocalItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems
        class RtfvToDomDefItems; //type: System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems> rsdomdefns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems> rsdomdefnslocal_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems> rtfvtodomdef_items;
        
}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems : public ydk::Entity
{
    public:
        RsdomDefNsItems();
        ~RsdomDefNsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems


class System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems : public ydk::Entity
{
    public:
        RsdomDefNsLocalItems();
        ~RsdomDefNsLocalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_33_ */

