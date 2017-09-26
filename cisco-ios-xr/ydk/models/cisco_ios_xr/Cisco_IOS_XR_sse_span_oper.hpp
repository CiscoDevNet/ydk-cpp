#ifndef _CISCO_IOS_XR_SSE_SPAN_OPER_
#define _CISCO_IOS_XR_SSE_SPAN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sse_span_oper {

class Ssespan : public ydk::Entity
{
    public:
        Ssespan();
        ~Ssespan();

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

        class Nodes; //type: Ssespan::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes> nodes;
        
}; // Ssespan


class Ssespan::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: Ssespan::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node> > node;
        
}; // Ssespan::Nodes


class Ssespan::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class SpanMirrInfos; //type: Ssespan::Nodes::Node::SpanMirrInfos
        class Spanudf; //type: Ssespan::Nodes::Node::Spanudf
        class SpanSessInfos; //type: Ssespan::Nodes::Node::SpanSessInfos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node::SpanMirrInfos> span_mirr_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node::SpanSessInfos> span_sess_infos;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node::Spanudf> spanudf;
        
}; // Ssespan::Nodes::Node


class Ssespan::Nodes::Node::SpanMirrInfos : public ydk::Entity
{
    public:
        SpanMirrInfos();
        ~SpanMirrInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMirrInfo; //type: Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo> > span_mirr_info;
        
}; // Ssespan::Nodes::Node::SpanMirrInfos


class Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo : public ydk::Entity
{
    public:
        SpanMirrInfo();
        ~SpanMirrInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf src_ifh; //type: uint32
        ydk::YLeaf intf_name_xr; //type: string
        ydk::YLeaf v4_acl_flag; //type: uint32
        ydk::YLeaf v6_acl_flag; //type: uint32
        ydk::YLeaf gre_acl_flag; //type: uint32
        ydk::YLeaf v4state; //type: uint32
        ydk::YLeaf v6state; //type: uint32
        ydk::YLeaf gre_state; //type: uint32
        ydk::YLeaf v4sessid; //type: uint32
        ydk::YLeaf v6sessid; //type: uint32
        ydk::YLeaf gre_sessid; //type: uint32
        ydk::YLeaf v4dst_type; //type: uint32
        ydk::YLeaf v6dst_type; //type: uint32
        ydk::YLeaf gredst_type; //type: uint32
        ydk::YLeaf v4statsptr; //type: uint32
        ydk::YLeaf v6statsptr; //type: uint32
        ydk::YLeaf grev4statsptr; //type: uint32
        ydk::YLeaf grev6statsptr; //type: uint32
        ydk::YLeaf mplsv4stats; //type: uint32
        ydk::YLeaf mplsv6pkts; //type: uint32
        ydk::YLeaf np_umask; //type: uint32
        ydk::YLeafList uidb; //type: list of  uint32
        ydk::YLeafList sft_hw_data; //type: list of  uint32

}; // Ssespan::Nodes::Node::SpanMirrInfos::SpanMirrInfo


class Ssespan::Nodes::Node::SpanSessInfos : public ydk::Entity
{
    public:
        SpanSessInfos();
        ~SpanSessInfos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanSessInfo; //type: Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sse_span_oper::Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo> > span_sess_info;
        
}; // Ssespan::Nodes::Node::SpanSessInfos


class Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo : public ydk::Entity
{
    public:
        SpanSessInfo();
        ~SpanSessInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: int32
        ydk::YLeaf session_class; //type: int32
        ydk::YLeaf valid; //type: uint8
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf state; //type: uint32
        ydk::YLeaf class_; //type: uint32
        ydk::YLeaf ifhandle; //type: uint32
        ydk::YLeaf mode; //type: uint32
        ydk::YLeaf ip_type; //type: uint32
        ydk::YLeaf vrf_id; //type: uint32
        ydk::YLeaf tos_bit; //type: uint32
        ydk::YLeaf tos_bit_copied; //type: uint32
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf dfbit; //type: uint32
        ydk::YLeafList src_ip; //type: list of  uint32
        ydk::YLeafList dst_ip; //type: list of  uint32
        ydk::YLeafList sdt_hw_data; //type: list of  uint32

}; // Ssespan::Nodes::Node::SpanSessInfos::SpanSessInfo


class Ssespan::Nodes::Node::Spanudf : public ydk::Entity
{
    public:
        Spanudf();
        ~Spanudf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList udf_hdr; //type: list of  uint32
        ydk::YLeafList udf_type; //type: list of  uint32
        ydk::YLeafList udf_len; //type: list of  uint32
        ydk::YLeafList udf_value; //type: list of  uint32
        ydk::YLeafList udf_hw_data; //type: list of  uint32

}; // Ssespan::Nodes::Node::Spanudf


}
}

#endif /* _CISCO_IOS_XR_SSE_SPAN_OPER_ */

