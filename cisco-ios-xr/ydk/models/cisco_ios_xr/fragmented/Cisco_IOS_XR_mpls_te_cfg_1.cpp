
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_1.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttributes()
{
    yang_name = "auto-backup-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::~AutoBackupAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_backup_attribute.size(); index++)
    {
        if(auto_backup_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-backup-attribute")
    {
        for(auto const & c : auto_backup_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute>();
        c->parent = this;
        auto_backup_attribute.push_back(std::move(c));
        children[segment_path] = auto_backup_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::get_children()
{
    for (auto const & c : auto_backup_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"},
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(nullptr) // presence node
	,auto_backup_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>())
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>())
	,priority(nullptr) // presence node
	,signalled_name(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>())
{
    auto_backup_logging->parent = this;
    children["auto-backup-logging"] = auto_backup_logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    policy_classes->parent = this;
    children["policy-classes"] = policy_classes;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "auto-backup-attribute"; yang_parent_name = "auto-backup-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::~AutoBackupAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(enable.operation)
	|| is_set(record_route.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_backup_logging !=  nullptr && auto_backup_logging->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-backup-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "auto-backup-logging")
    {
        if(auto_backup_logging != nullptr)
        {
            children["auto-backup-logging"] = auto_backup_logging;
        }
        else
        {
            auto_backup_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging>();
            auto_backup_logging->parent = this;
            children["auto-backup-logging"] = auto_backup_logging;
        }
        return children.at("auto-backup-logging");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
        else
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses>();
            policy_classes->parent = this;
            children["policy-classes"] = policy_classes;
        }
        return children.at("policy-classes");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("auto-backup-logging") == children.end())
    {
        if(auto_backup_logging != nullptr)
        {
            children["auto-backup-logging"] = auto_backup_logging;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("policy-classes") == children.end())
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::SignalledName()
    :
    mp_address{YType::boolean, "mp-address"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::~SignalledName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_data() const
{
    return mp_address.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(mp_address.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mp_address.is_set || is_set(mp_address.operation)) leaf_name_data.push_back(mp_address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mp-address")
    {
        mp_address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::AutoBackupLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    state_message{YType::empty, "state-message"}
{
    yang_name = "auto-backup-logging"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::~AutoBackupLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(state_message.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-backup-logging";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBackupLogging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "path-selection"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{
    yang_name = "policy-classes"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(policy_class.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClasses' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-backup-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttributes()
{
    yang_name = "otn-pp-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::~OtnPpAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_data() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::has_operation() const
{
    for (std::size_t index=0; index<otn_pp_attribute.size(); index++)
    {
        if(otn_pp_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otn-pp-attribute")
    {
        for(auto const & c : otn_pp_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute>();
        c->parent = this;
        otn_pp_attribute.push_back(std::move(c));
        children[segment_path] = otn_pp_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::get_children()
{
    for (auto const & c : otn_pp_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::OtnPpAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    aps_protection_mode{YType::enumeration, "aps-protection-mode"},
    aps_protection_type{YType::enumeration, "aps-protection-type"},
    aps_restoration_style{YType::enumeration, "aps-restoration-style"},
    enable{YType::empty, "enable"}
    	,
    path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>())
	,revert_schedule_names(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>())
	,sub_network_connection_mode(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>())
	,timers(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>())
{
    path_selection->parent = this;
    children["path-selection"] = path_selection;

    revert_schedule_names->parent = this;
    children["revert-schedule-names"] = revert_schedule_names;

    sub_network_connection_mode->parent = this;
    children["sub-network-connection-mode"] = sub_network_connection_mode;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "otn-pp-attribute"; yang_parent_name = "otn-pp-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::~OtnPpAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| aps_protection_mode.is_set
	|| aps_protection_type.is_set
	|| aps_restoration_style.is_set
	|| enable.is_set
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_data())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(aps_protection_mode.operation)
	|| is_set(aps_protection_type.operation)
	|| is_set(aps_restoration_style.operation)
	|| is_set(enable.operation)
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (revert_schedule_names !=  nullptr && revert_schedule_names->has_operation())
	|| (sub_network_connection_mode !=  nullptr && sub_network_connection_mode->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-pp-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/otn-pp-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (aps_protection_mode.is_set || is_set(aps_protection_mode.operation)) leaf_name_data.push_back(aps_protection_mode.get_name_leafdata());
    if (aps_protection_type.is_set || is_set(aps_protection_type.operation)) leaf_name_data.push_back(aps_protection_type.get_name_leafdata());
    if (aps_restoration_style.is_set || is_set(aps_restoration_style.operation)) leaf_name_data.push_back(aps_restoration_style.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "revert-schedule-names")
    {
        if(revert_schedule_names != nullptr)
        {
            children["revert-schedule-names"] = revert_schedule_names;
        }
        else
        {
            revert_schedule_names = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames>();
            revert_schedule_names->parent = this;
            children["revert-schedule-names"] = revert_schedule_names;
        }
        return children.at("revert-schedule-names");
    }

    if(child_yang_name == "sub-network-connection-mode")
    {
        if(sub_network_connection_mode != nullptr)
        {
            children["sub-network-connection-mode"] = sub_network_connection_mode;
        }
        else
        {
            sub_network_connection_mode = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode>();
            sub_network_connection_mode->parent = this;
            children["sub-network-connection-mode"] = sub_network_connection_mode;
        }
        return children.at("sub-network-connection-mode");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::get_children()
{
    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("revert-schedule-names") == children.end())
    {
        if(revert_schedule_names != nullptr)
        {
            children["revert-schedule-names"] = revert_schedule_names;
        }
    }

    if(children.find("sub-network-connection-mode") == children.end())
    {
        if(sub_network_connection_mode != nullptr)
        {
            children["sub-network-connection-mode"] = sub_network_connection_mode;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "aps-protection-mode")
    {
        aps_protection_mode = value;
    }
    if(value_path == "aps-protection-type")
    {
        aps_protection_type = value;
    }
    if(value_path == "aps-restoration-style")
    {
        aps_restoration_style = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleNames()
{
    yang_name = "revert-schedule-names"; yang_parent_name = "otn-pp-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::~RevertScheduleNames()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_data() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::has_operation() const
{
    for (std::size_t index=0; index<revert_schedule_name.size(); index++)
    {
        if(revert_schedule_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-names";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertScheduleNames' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule-name")
    {
        for(auto const & c : revert_schedule_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName>();
        c->parent = this;
        revert_schedule_name.push_back(std::move(c));
        children[segment_path] = revert_schedule_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::get_children()
{
    for (auto const & c : revert_schedule_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::RevertScheduleName()
    :
    schedule_name{YType::str, "schedule-name"},
    revert_schedule_frequency{YType::uint32, "revert-schedule-frequency"},
    revert_schedule_max_tries{YType::uint32, "revert-schedule-max-tries"},
    sch_name_enable{YType::empty, "sch-name-enable"}
    	,
    schedule_date(nullptr) // presence node
	,schedule_duration(nullptr) // presence node
{
    yang_name = "revert-schedule-name"; yang_parent_name = "revert-schedule-names";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::~RevertScheduleName()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_data() const
{
    return schedule_name.is_set
	|| revert_schedule_frequency.is_set
	|| revert_schedule_max_tries.is_set
	|| sch_name_enable.is_set
	|| (schedule_date !=  nullptr && schedule_date->has_data())
	|| (schedule_duration !=  nullptr && schedule_duration->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::has_operation() const
{
    return is_set(operation)
	|| is_set(schedule_name.operation)
	|| is_set(revert_schedule_frequency.operation)
	|| is_set(revert_schedule_max_tries.operation)
	|| is_set(sch_name_enable.operation)
	|| (schedule_date !=  nullptr && schedule_date->has_operation())
	|| (schedule_duration !=  nullptr && schedule_duration->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule-name" <<"[schedule-name='" <<schedule_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertScheduleName' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedule_name.is_set || is_set(schedule_name.operation)) leaf_name_data.push_back(schedule_name.get_name_leafdata());
    if (revert_schedule_frequency.is_set || is_set(revert_schedule_frequency.operation)) leaf_name_data.push_back(revert_schedule_frequency.get_name_leafdata());
    if (revert_schedule_max_tries.is_set || is_set(revert_schedule_max_tries.operation)) leaf_name_data.push_back(revert_schedule_max_tries.get_name_leafdata());
    if (sch_name_enable.is_set || is_set(sch_name_enable.operation)) leaf_name_data.push_back(sch_name_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "schedule-date")
    {
        if(schedule_date != nullptr)
        {
            children["schedule-date"] = schedule_date;
        }
        else
        {
            schedule_date = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate>();
            schedule_date->parent = this;
            children["schedule-date"] = schedule_date;
        }
        return children.at("schedule-date");
    }

    if(child_yang_name == "schedule-duration")
    {
        if(schedule_duration != nullptr)
        {
            children["schedule-duration"] = schedule_duration;
        }
        else
        {
            schedule_duration = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration>();
            schedule_duration->parent = this;
            children["schedule-duration"] = schedule_duration;
        }
        return children.at("schedule-duration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::get_children()
{
    if(children.find("schedule-date") == children.end())
    {
        if(schedule_date != nullptr)
        {
            children["schedule-date"] = schedule_date;
        }
    }

    if(children.find("schedule-duration") == children.end())
    {
        if(schedule_duration != nullptr)
        {
            children["schedule-duration"] = schedule_duration;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "schedule-name")
    {
        schedule_name = value;
    }
    if(value_path == "revert-schedule-frequency")
    {
        revert_schedule_frequency = value;
    }
    if(value_path == "revert-schedule-max-tries")
    {
        revert_schedule_max_tries = value;
    }
    if(value_path == "sch-name-enable")
    {
        sch_name_enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::ScheduleDuration()
    :
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"}
{
    yang_name = "schedule-duration"; yang_parent_name = "revert-schedule-name";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::~ScheduleDuration()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_data() const
{
    return hour.is_set
	|| minutes.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::has_operation() const
{
    return is_set(operation)
	|| is_set(hour.operation)
	|| is_set(minutes.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-duration";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ScheduleDuration' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hour.is_set || is_set(hour.operation)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hour")
    {
        hour = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::ScheduleDate()
    :
    day{YType::uint32, "day"},
    hour{YType::uint32, "hour"},
    minutes{YType::uint32, "minutes"},
    month{YType::uint32, "month"},
    year{YType::uint32, "year"}
{
    yang_name = "schedule-date"; yang_parent_name = "revert-schedule-name";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::~ScheduleDate()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_data() const
{
    return day.is_set
	|| hour.is_set
	|| minutes.is_set
	|| month.is_set
	|| year.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::has_operation() const
{
    return is_set(operation)
	|| is_set(day.operation)
	|| is_set(hour.operation)
	|| is_set(minutes.operation)
	|| is_set(month.operation)
	|| is_set(year.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-date";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ScheduleDate' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.operation)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hour.is_set || is_set(hour.operation)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (month.is_set || is_set(month.operation)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.operation)) leaf_name_data.push_back(year.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "day")
    {
        day = value;
    }
    if(value_path == "hour")
    {
        hour = value;
    }
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "month")
    {
        month = value;
    }
    if(value_path == "year")
    {
        year = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::SubNetworkConnectionMode()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    connection_monitoring_mode{YType::uint32, "connection-monitoring-mode"}
{
    yang_name = "sub-network-connection-mode"; yang_parent_name = "otn-pp-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::~SubNetworkConnectionMode()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_data() const
{
    return connection_mode.is_set
	|| connection_monitoring_mode.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_mode.operation)
	|| is_set(connection_monitoring_mode.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-network-connection-mode";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubNetworkConnectionMode' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.operation)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (connection_monitoring_mode.is_set || is_set(connection_monitoring_mode.operation)) leaf_name_data.push_back(connection_monitoring_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
    }
    if(value_path == "connection-monitoring-mode")
    {
        connection_monitoring_mode = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::Timers()
    :
    aps_hold_off{YType::uint32, "aps-hold-off"},
    aps_wait_to_restore{YType::uint32, "aps-wait-to-restore"}
{
    yang_name = "timers"; yang_parent_name = "otn-pp-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_data() const
{
    return aps_hold_off.is_set
	|| aps_wait_to_restore.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(aps_hold_off.operation)
	|| is_set(aps_wait_to_restore.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_hold_off.is_set || is_set(aps_hold_off.operation)) leaf_name_data.push_back(aps_hold_off.get_name_leafdata());
    if (aps_wait_to_restore.is_set || is_set(aps_wait_to_restore.operation)) leaf_name_data.push_back(aps_wait_to_restore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aps-hold-off")
    {
        aps_hold_off = value;
    }
    if(value_path == "aps-wait-to-restore")
    {
        aps_wait_to_restore = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "path-selection"; yang_parent_name = "otn-pp-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttributes()
{
    yang_name = "auto-mesh-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::~AutoMeshAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_data() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::has_operation() const
{
    for (std::size_t index=0; index<auto_mesh_attribute.size(); index++)
    {
        if(auto_mesh_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-mesh-attribute")
    {
        for(auto const & c : auto_mesh_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute>();
        c->parent = this;
        auto_mesh_attribute.push_back(std::move(c));
        children[segment_path] = auto_mesh_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::get_children()
{
    for (auto const & c : auto_mesh_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    autoroute_announce{YType::empty, "autoroute-announce"},
    collection_only{YType::empty, "collection-only"},
    enable{YType::empty, "enable"},
    forward_class{YType::uint32, "forward-class"},
    interface_bandwidth{YType::uint32, "interface-bandwidth"},
    load_share{YType::uint32, "load-share"},
    record_route{YType::empty, "record-route"},
    soft_preemption{YType::empty, "soft-preemption"}
    	,
    affinity_mask(nullptr) // presence node
	,auto_mesh_logging(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>())
	,bandwidth(nullptr) // presence node
	,fast_reroute(nullptr) // presence node
	,new_style_affinity_affinity_types(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>())
	,policy_classes(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>())
	,priority(nullptr) // presence node
{
    auto_mesh_logging->parent = this;
    children["auto-mesh-logging"] = auto_mesh_logging;

    new_style_affinity_affinity_types->parent = this;
    children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    policy_classes->parent = this;
    children["policy-classes"] = policy_classes;

    yang_name = "auto-mesh-attribute"; yang_parent_name = "auto-mesh-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::~AutoMeshAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| autoroute_announce.is_set
	|| collection_only.is_set
	|| enable.is_set
	|| forward_class.is_set
	|| interface_bandwidth.is_set
	|| load_share.is_set
	|| record_route.is_set
	|| soft_preemption.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (policy_classes !=  nullptr && policy_classes->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(autoroute_announce.operation)
	|| is_set(collection_only.operation)
	|| is_set(enable.operation)
	|| is_set(forward_class.operation)
	|| is_set(interface_bandwidth.operation)
	|| is_set(load_share.operation)
	|| is_set(record_route.operation)
	|| is_set(soft_preemption.operation)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_mesh_logging !=  nullptr && auto_mesh_logging->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (new_style_affinity_affinity_types !=  nullptr && new_style_affinity_affinity_types->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (policy_classes !=  nullptr && policy_classes->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/auto-mesh-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (autoroute_announce.is_set || is_set(autoroute_announce.operation)) leaf_name_data.push_back(autoroute_announce.get_name_leafdata());
    if (collection_only.is_set || is_set(collection_only.operation)) leaf_name_data.push_back(collection_only.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (interface_bandwidth.is_set || is_set(interface_bandwidth.operation)) leaf_name_data.push_back(interface_bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
        else
        {
            affinity_mask = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask>();
            affinity_mask->parent = this;
            children["affinity-mask"] = affinity_mask;
        }
        return children.at("affinity-mask");
    }

    if(child_yang_name == "auto-mesh-logging")
    {
        if(auto_mesh_logging != nullptr)
        {
            children["auto-mesh-logging"] = auto_mesh_logging;
        }
        else
        {
            auto_mesh_logging = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging>();
            auto_mesh_logging->parent = this;
            children["auto-mesh-logging"] = auto_mesh_logging;
        }
        return children.at("auto-mesh-logging");
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "new-style-affinity-affinity-types")
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        else
        {
            new_style_affinity_affinity_types = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes>();
            new_style_affinity_affinity_types->parent = this;
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
        return children.at("new-style-affinity-affinity-types");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    if(child_yang_name == "policy-classes")
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
        else
        {
            policy_classes = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses>();
            policy_classes->parent = this;
            children["policy-classes"] = policy_classes;
        }
        return children.at("policy-classes");
    }

    if(child_yang_name == "priority")
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
        else
        {
            priority = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority>();
            priority->parent = this;
            children["priority"] = priority;
        }
        return children.at("priority");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::get_children()
{
    if(children.find("affinity-mask") == children.end())
    {
        if(affinity_mask != nullptr)
        {
            children["affinity-mask"] = affinity_mask;
        }
    }

    if(children.find("auto-mesh-logging") == children.end())
    {
        if(auto_mesh_logging != nullptr)
        {
            children["auto-mesh-logging"] = auto_mesh_logging;
        }
    }

    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("new-style-affinity-affinity-types") == children.end())
    {
        if(new_style_affinity_affinity_types != nullptr)
        {
            children["new-style-affinity-affinity-types"] = new_style_affinity_affinity_types;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    if(children.find("policy-classes") == children.end())
    {
        if(policy_classes != nullptr)
        {
            children["policy-classes"] = policy_classes;
        }
    }

    if(children.find("priority") == children.end())
    {
        if(priority != nullptr)
        {
            children["priority"] = priority;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "autoroute-announce")
    {
        autoroute_announce = value;
    }
    if(value_path == "collection-only")
    {
        collection_only = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "interface-bandwidth")
    {
        interface_bandwidth = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::AutoMeshLogging()
    :
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    reroute_messsage{YType::empty, "reroute-messsage"},
    state_message{YType::empty, "state-message"}
{
    yang_name = "auto-mesh-logging"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::~AutoMeshLogging()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_data() const
{
    return bandwidth_change_message.is_set
	|| insufficient_bw_message.is_set
	|| pcalc_failure_message.is_set
	|| reoptimize_attempts_message.is_set
	|| reoptimized_message.is_set
	|| reroute_messsage.is_set
	|| state_message.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_change_message.operation)
	|| is_set(insufficient_bw_message.operation)
	|| is_set(pcalc_failure_message.operation)
	|| is_set(reoptimize_attempts_message.operation)
	|| is_set(reoptimized_message.operation)
	|| is_set(reroute_messsage.operation)
	|| is_set(state_message.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-mesh-logging";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMeshLogging' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.operation)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.operation)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.operation)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.operation)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.operation)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.operation)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.operation)) leaf_name_data.push_back(state_message.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
    }
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
    }
    if(value_path == "state-message")
    {
        state_message = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::Priority()
    :
    hold_priority{YType::uint32, "hold-priority"},
    setup_priority{YType::uint32, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::~Priority()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(setup_priority.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::~AffinityMask()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    dste_type{YType::enumeration, "dste-type"}
{
    yang_name = "bandwidth"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::~Bandwidth()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| class_or_pool_type.is_set
	|| dste_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_or_pool_type.operation)
	|| is_set(dste_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.operation)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (dste_type.is_set || is_set(dste_type.operation)) leaf_name_data.push_back(dste_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
    }
    if(value_path == "dste-type")
    {
        dste_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "path-selection"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{
    yang_name = "policy-classes"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::~PolicyClasses()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_data() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(policy_class.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyClasses' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
{
    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_data() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.size(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.size(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        for(auto const & c : new_style_affinity_affinity_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        c->parent = this;
        new_style_affinity_affinity_type.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        for(auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        c->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.push_back(std::move(c));
        children[segment_path] = new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::get_children()
{
    for (auto const & c : new_style_affinity_affinity_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    return affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityType' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity1{YType::str, "affinity1"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    return affinity1.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    return affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity1{YType::str, "affinity1"},
    affinity10{YType::str, "affinity10"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity_type{YType::enumeration, "affinity-type"}
{
    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    return affinity1.is_set
	|| affinity10.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity_type.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity1.operation)
	|| is_set(affinity10.operation)
	|| is_set(affinity2.operation)
	|| is_set(affinity3.operation)
	|| is_set(affinity4.operation)
	|| is_set(affinity5.operation)
	|| is_set(affinity6.operation)
	|| is_set(affinity7.operation)
	|| is_set(affinity8.operation)
	|| is_set(affinity9.operation)
	|| is_set(affinity_type.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10" <<"[affinity1='" <<affinity1 <<"']" <<"[affinity10='" <<affinity10 <<"']" <<"[affinity2='" <<affinity2 <<"']" <<"[affinity3='" <<affinity3 <<"']" <<"[affinity4='" <<affinity4 <<"']" <<"[affinity5='" <<affinity5 <<"']" <<"[affinity6='" <<affinity6 <<"']" <<"[affinity7='" <<affinity7 <<"']" <<"[affinity8='" <<affinity8 <<"']" <<"[affinity9='" <<affinity9 <<"']" <<"[affinity-type='" <<affinity_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity1.is_set || is_set(affinity1.operation)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.operation)) leaf_name_data.push_back(affinity10.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.operation)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.operation)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.operation)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.operation)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.operation)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.operation)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.operation)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.operation)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity_type.is_set || is_set(affinity_type.operation)) leaf_name_data.push_back(affinity_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity1")
    {
        affinity1 = value;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
    }
    if(value_path == "affinity-type")
    {
        affinity_type = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{
    yang_name = "fast-reroute"; yang_parent_name = "auto-mesh-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_data() const
{
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_protection.operation)
	|| is_set(node_protection.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.operation)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.operation)) leaf_name_data.push_back(node_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttributes()
{
    yang_name = "xro-attributes"; yang_parent_name = "attribute-set";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::~XroAttributes()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_data() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::has_operation() const
{
    for (std::size_t index=0; index<xro_attribute.size(); index++)
    {
        if(xro_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-attribute")
    {
        for(auto const & c : xro_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute>();
        c->parent = this;
        xro_attribute.push_back(std::move(c));
        children[segment_path] = xro_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::get_children()
{
    for (auto const & c : xro_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::XroAttribute()
    :
    attribute_set_name{YType::str, "attribute-set-name"},
    enable{YType::empty, "enable"}
    	,
    path_diversity(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>())
	,path_selection(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>())
{
    path_diversity->parent = this;
    children["path-diversity"] = path_diversity;

    path_selection->parent = this;
    children["path-selection"] = path_selection;

    yang_name = "xro-attribute"; yang_parent_name = "xro-attributes";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::~XroAttribute()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_data() const
{
    return attribute_set_name.is_set
	|| enable.is_set
	|| (path_diversity !=  nullptr && path_diversity->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(enable.operation)
	|| (path_diversity !=  nullptr && path_diversity->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute" <<"[attribute-set-name='" <<attribute_set_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/attribute-set/xro-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-diversity")
    {
        if(path_diversity != nullptr)
        {
            children["path-diversity"] = path_diversity;
        }
        else
        {
            path_diversity = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity>();
            path_diversity->parent = this;
            children["path-diversity"] = path_diversity;
        }
        return children.at("path-diversity");
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
        else
        {
            path_selection = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection>();
            path_selection->parent = this;
            children["path-selection"] = path_selection;
        }
        return children.at("path-selection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::get_children()
{
    if(children.find("path-diversity") == children.end())
    {
        if(path_diversity != nullptr)
        {
            children["path-diversity"] = path_diversity;
        }
    }

    if(children.find("path-selection") == children.end())
    {
        if(path_selection != nullptr)
        {
            children["path-selection"] = path_selection;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::PathDiversity()
    :
    lsp(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>())
	,srlgs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>())
{
    lsp->parent = this;
    children["lsp"] = lsp;

    srlgs->parent = this;
    children["srlgs"] = srlgs;

    yang_name = "path-diversity"; yang_parent_name = "xro-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::~PathDiversity()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_data() const
{
    return (lsp !=  nullptr && lsp->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::has_operation() const
{
    return is_set(operation)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-diversity";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathDiversity' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp")
    {
        if(lsp != nullptr)
        {
            children["lsp"] = lsp;
        }
        else
        {
            lsp = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp>();
            lsp->parent = this;
            children["lsp"] = lsp;
        }
        return children.at("lsp");
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
        else
        {
            srlgs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs>();
            srlgs->parent = this;
            children["srlgs"] = srlgs;
        }
        return children.at("srlgs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::get_children()
{
    if(children.find("lsp") == children.end())
    {
        if(lsp != nullptr)
        {
            children["lsp"] = lsp;
        }
    }

    if(children.find("srlgs") == children.end())
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlgs()
{
    yang_name = "srlgs"; yang_parent_name = "path-diversity";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::~Srlgs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srlgs' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(std::move(c));
        children[segment_path] = srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::get_children()
{
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::Srlg()
    :
    srlg{YType::uint32, "srlg"},
    conformance{YType::enumeration, "conformance"}
{
    yang_name = "srlg"; yang_parent_name = "srlgs";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_data() const
{
    return srlg.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg.operation)
	|| is_set(conformance.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg='" <<srlg <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srlg' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg.is_set || is_set(srlg.operation)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.operation)) leaf_name_data.push_back(conformance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg")
    {
        srlg = value;
    }
    if(value_path == "conformance")
    {
        conformance = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Lsp()
    :
    fecs(std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>())
{
    fecs->parent = this;
    children["fecs"] = fecs;

    yang_name = "lsp"; yang_parent_name = "path-diversity";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::~Lsp()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_data() const
{
    return (fecs !=  nullptr && fecs->has_data());
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::has_operation() const
{
    return is_set(operation)
	|| (fecs !=  nullptr && fecs->has_operation());
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsp' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fecs")
    {
        if(fecs != nullptr)
        {
            children["fecs"] = fecs;
        }
        else
        {
            fecs = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs>();
            fecs->parent = this;
            children["fecs"] = fecs;
        }
        return children.at("fecs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::get_children()
{
    if(children.find("fecs") == children.end())
    {
        if(fecs != nullptr)
        {
            children["fecs"] = fecs;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fecs()
{
    yang_name = "fecs"; yang_parent_name = "lsp";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::~Fecs()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_data() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::has_operation() const
{
    for (std::size_t index=0; index<fec.size(); index++)
    {
        if(fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fecs";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fecs' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        for(auto const & c : fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec>();
        c->parent = this;
        fec.push_back(std::move(c));
        children[segment_path] = fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::get_children()
{
    for (auto const & c : fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::Fec()
    :
    destination{YType::str, "destination"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source{YType::str, "source"},
    tunnel_id{YType::uint32, "tunnel-id"},
    conformance{YType::enumeration, "conformance"}
{
    yang_name = "fec"; yang_parent_name = "fecs";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::~Fec()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_data() const
{
    return destination.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| source.is_set
	|| tunnel_id.is_set
	|| conformance.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(conformance.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec" <<"[destination='" <<destination <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source='" <<source <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (conformance.is_set || is_set(conformance.operation)) leaf_name_data.push_back(conformance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "conformance")
    {
        conformance = value;
    }
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::PathSelection()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "path-selection"; yang_parent_name = "xro-attribute";
}

MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_data() const
{
    return enable.is_set;
}

bool MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GlobalAttributes::BfdOverLsp::BfdOverLsp()
    :
    head(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>())
	,tail(std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>())
{
    head->parent = this;
    children["head"] = head;

    tail->parent = this;
    children["tail"] = tail;

    yang_name = "bfd-over-lsp"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::BfdOverLsp::~BfdOverLsp()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_data() const
{
    return (head !=  nullptr && head->has_data())
	|| (tail !=  nullptr && tail->has_data());
}

bool MplsTe::GlobalAttributes::BfdOverLsp::has_operation() const
{
    return is_set(operation)
	|| (head !=  nullptr && head->has_operation())
	|| (tail !=  nullptr && tail->has_operation());
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::BfdOverLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head")
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
        else
        {
            head = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Head>();
            head->parent = this;
            children["head"] = head;
        }
        return children.at("head");
    }

    if(child_yang_name == "tail")
    {
        if(tail != nullptr)
        {
            children["tail"] = tail;
        }
        else
        {
            tail = std::make_shared<MplsTe::GlobalAttributes::BfdOverLsp::Tail>();
            tail->parent = this;
            children["tail"] = tail;
        }
        return children.at("tail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::BfdOverLsp::get_children()
{
    if(children.find("head") == children.end())
    {
        if(head != nullptr)
        {
            children["head"] = head;
        }
    }

    if(children.find("tail") == children.end())
    {
        if(tail != nullptr)
        {
            children["tail"] = tail;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::Tail()
    :
    minimum_interval{YType::uint32, "minimum-interval"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "tail"; yang_parent_name = "bfd-over-lsp";
}

MplsTe::GlobalAttributes::BfdOverLsp::Tail::~Tail()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_data() const
{
    return minimum_interval.is_set
	|| multiplier.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Tail::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum_interval.operation)
	|| is_set(multiplier.operation);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_interval.is_set || is_set(minimum_interval.operation)) leaf_name_data.push_back(minimum_interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::BfdOverLsp::Tail::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Tail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum-interval")
    {
        minimum_interval = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::Head()
    :
    down_action{YType::enumeration, "down-action"},
    reopt_timeout{YType::uint32, "reopt-timeout"}
{
    yang_name = "head"; yang_parent_name = "bfd-over-lsp";
}

MplsTe::GlobalAttributes::BfdOverLsp::Head::~Head()
{
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_data() const
{
    return down_action.is_set
	|| reopt_timeout.is_set;
}

bool MplsTe::GlobalAttributes::BfdOverLsp::Head::has_operation() const
{
    return is_set(operation)
	|| is_set(down_action.operation)
	|| is_set(reopt_timeout.operation);
}

std::string MplsTe::GlobalAttributes::BfdOverLsp::Head::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::BfdOverLsp::Head::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/bfd-over-lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_action.is_set || is_set(down_action.operation)) leaf_name_data.push_back(down_action.get_name_leafdata());
    if (reopt_timeout.is_set || is_set(reopt_timeout.operation)) leaf_name_data.push_back(reopt_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::BfdOverLsp::Head::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::BfdOverLsp::Head::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::BfdOverLsp::Head::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-action")
    {
        down_action = value;
    }
    if(value_path == "reopt-timeout")
    {
        reopt_timeout = value;
    }
}

MplsTe::GlobalAttributes::PceAttributes::PceAttributes()
    :
    address{YType::str, "address"},
    deadtimer{YType::uint32, "deadtimer"},
    keepalive{YType::uint32, "keepalive"},
    keepalive_tolerance{YType::uint32, "keepalive-tolerance"},
    keychain{YType::str, "keychain"},
    password{YType::str, "password"},
    peer_source_addr{YType::str, "peer-source-addr"},
    precedence{YType::uint32, "precedence"},
    reoptimize_period{YType::uint32, "reoptimize-period"},
    request_timeout{YType::uint32, "request-timeout"},
    segment_routing{YType::empty, "segment-routing"},
    speaker_entity_id{YType::str, "speaker-entity-id"}
    	,
    logging(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>())
	,pce_stateful(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>())
	,peers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>())
	,timer(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>())
{
    logging->parent = this;
    children["logging"] = logging;

    pce_stateful->parent = this;
    children["pce-stateful"] = pce_stateful;

    peers->parent = this;
    children["peers"] = peers;

    timer->parent = this;
    children["timer"] = timer;

    yang_name = "pce-attributes"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::PceAttributes::~PceAttributes()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::has_data() const
{
    return address.is_set
	|| deadtimer.is_set
	|| keepalive.is_set
	|| keepalive_tolerance.is_set
	|| keychain.is_set
	|| password.is_set
	|| peer_source_addr.is_set
	|| precedence.is_set
	|| reoptimize_period.is_set
	|| request_timeout.is_set
	|| segment_routing.is_set
	|| speaker_entity_id.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (pce_stateful !=  nullptr && pce_stateful->has_data())
	|| (peers !=  nullptr && peers->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(deadtimer.operation)
	|| is_set(keepalive.operation)
	|| is_set(keepalive_tolerance.operation)
	|| is_set(keychain.operation)
	|| is_set(password.operation)
	|| is_set(peer_source_addr.operation)
	|| is_set(precedence.operation)
	|| is_set(reoptimize_period.operation)
	|| is_set(request_timeout.operation)
	|| is_set(segment_routing.operation)
	|| is_set(speaker_entity_id.operation)
	|| (logging !=  nullptr && logging->has_operation())
	|| (pce_stateful !=  nullptr && pce_stateful->has_operation())
	|| (peers !=  nullptr && peers->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (deadtimer.is_set || is_set(deadtimer.operation)) leaf_name_data.push_back(deadtimer.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (keepalive_tolerance.is_set || is_set(keepalive_tolerance.operation)) leaf_name_data.push_back(keepalive_tolerance.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.operation)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (peer_source_addr.is_set || is_set(peer_source_addr.operation)) leaf_name_data.push_back(peer_source_addr.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (reoptimize_period.is_set || is_set(reoptimize_period.operation)) leaf_name_data.push_back(reoptimize_period.get_name_leafdata());
    if (request_timeout.is_set || is_set(request_timeout.operation)) leaf_name_data.push_back(request_timeout.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.operation)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (speaker_entity_id.is_set || is_set(speaker_entity_id.operation)) leaf_name_data.push_back(speaker_entity_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "pce-stateful")
    {
        if(pce_stateful != nullptr)
        {
            children["pce-stateful"] = pce_stateful;
        }
        else
        {
            pce_stateful = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful>();
            pce_stateful->parent = this;
            children["pce-stateful"] = pce_stateful;
        }
        return children.at("pce-stateful");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    if(child_yang_name == "timer")
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
        else
        {
            timer = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Timer>();
            timer->parent = this;
            children["timer"] = timer;
        }
        return children.at("timer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::get_children()
{
    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("pce-stateful") == children.end())
    {
        if(pce_stateful != nullptr)
        {
            children["pce-stateful"] = pce_stateful;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    if(children.find("timer") == children.end())
    {
        if(timer != nullptr)
        {
            children["timer"] = timer;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "deadtimer")
    {
        deadtimer = value;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
    if(value_path == "keepalive-tolerance")
    {
        keepalive_tolerance = value;
    }
    if(value_path == "keychain")
    {
        keychain = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "peer-source-addr")
    {
        peer_source_addr = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "reoptimize-period")
    {
        reoptimize_period = value;
    }
    if(value_path == "request-timeout")
    {
        request_timeout = value;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
    }
    if(value_path == "speaker-entity-id")
    {
        speaker_entity_id = value;
    }
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::PceStateful()
    :
    cisco_extension{YType::empty, "cisco-extension"},
    delegation{YType::empty, "delegation"},
    enable{YType::empty, "enable"},
    fast_repair{YType::empty, "fast-repair"},
    instantiation{YType::empty, "instantiation"},
    report{YType::empty, "report"}
    	,
    stateful_timers(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>())
{
    stateful_timers->parent = this;
    children["stateful-timers"] = stateful_timers;

    yang_name = "pce-stateful"; yang_parent_name = "pce-attributes";
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::~PceStateful()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_data() const
{
    return cisco_extension.is_set
	|| delegation.is_set
	|| enable.is_set
	|| fast_repair.is_set
	|| instantiation.is_set
	|| report.is_set
	|| (stateful_timers !=  nullptr && stateful_timers->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_extension.operation)
	|| is_set(delegation.operation)
	|| is_set(enable.operation)
	|| is_set(fast_repair.operation)
	|| is_set(instantiation.operation)
	|| is_set(report.operation)
	|| (stateful_timers !=  nullptr && stateful_timers->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-stateful";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_extension.is_set || is_set(cisco_extension.operation)) leaf_name_data.push_back(cisco_extension.get_name_leafdata());
    if (delegation.is_set || is_set(delegation.operation)) leaf_name_data.push_back(delegation.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fast_repair.is_set || is_set(fast_repair.operation)) leaf_name_data.push_back(fast_repair.get_name_leafdata());
    if (instantiation.is_set || is_set(instantiation.operation)) leaf_name_data.push_back(instantiation.get_name_leafdata());
    if (report.is_set || is_set(report.operation)) leaf_name_data.push_back(report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stateful-timers")
    {
        if(stateful_timers != nullptr)
        {
            children["stateful-timers"] = stateful_timers;
        }
        else
        {
            stateful_timers = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers>();
            stateful_timers->parent = this;
            children["stateful-timers"] = stateful_timers;
        }
        return children.at("stateful-timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::PceStateful::get_children()
{
    if(children.find("stateful-timers") == children.end())
    {
        if(stateful_timers != nullptr)
        {
            children["stateful-timers"] = stateful_timers;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-extension")
    {
        cisco_extension = value;
    }
    if(value_path == "delegation")
    {
        delegation = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "fast-repair")
    {
        fast_repair = value;
    }
    if(value_path == "instantiation")
    {
        instantiation = value;
    }
    if(value_path == "report")
    {
        report = value;
    }
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::StatefulTimers()
    :
    redelegation_timeout{YType::uint32, "redelegation-timeout"},
    state_timeout{YType::uint32, "state-timeout"}
{
    yang_name = "stateful-timers"; yang_parent_name = "pce-stateful";
}

MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::~StatefulTimers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_data() const
{
    return redelegation_timeout.is_set
	|| state_timeout.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(redelegation_timeout.operation)
	|| is_set(state_timeout.operation);
}

std::string MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stateful-timers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/pce-stateful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redelegation_timeout.is_set || is_set(redelegation_timeout.operation)) leaf_name_data.push_back(redelegation_timeout.get_name_leafdata());
    if (state_timeout.is_set || is_set(state_timeout.operation)) leaf_name_data.push_back(state_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redelegation-timeout")
    {
        redelegation_timeout = value;
    }
    if(value_path == "state-timeout")
    {
        state_timeout = value;
    }
}

MplsTe::GlobalAttributes::PceAttributes::Timer::Timer()
{
    yang_name = "timer"; yang_parent_name = "pce-attributes";
}

MplsTe::GlobalAttributes::PceAttributes::Timer::~Timer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_data() const
{
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Timer::has_operation() const
{
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::Timer::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Timer::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "pce-attributes";
}

MplsTe::GlobalAttributes::PceAttributes::Peers::~Peers()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::Peer()
    :
    pce_peer_address{YType::str, "pce-peer-address"},
    enable{YType::empty, "enable"},
    keychain{YType::str, "keychain"},
    password{YType::str, "password"},
    precedence{YType::uint32, "precedence"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::~Peer()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_data() const
{
    return pce_peer_address.is_set
	|| enable.is_set
	|| keychain.is_set
	|| password.is_set
	|| precedence.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(pce_peer_address.operation)
	|| is_set(enable.operation)
	|| is_set(keychain.operation)
	|| is_set(password.operation)
	|| is_set(precedence.operation);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[pce-peer-address='" <<pce_peer_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_peer_address.is_set || is_set(pce_peer_address.operation)) leaf_name_data.push_back(pce_peer_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.operation)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pce-peer-address")
    {
        pce_peer_address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "keychain")
    {
        keychain = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Logging()
    :
    events(std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>())
{
    events->parent = this;
    children["events"] = events;

    yang_name = "logging"; yang_parent_name = "pce-attributes";
}

MplsTe::GlobalAttributes::PceAttributes::Logging::~Logging()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_data() const
{
    return (events !=  nullptr && events->has_data());
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::has_operation() const
{
    return is_set(operation)
	|| (events !=  nullptr && events->has_operation());
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "events")
    {
        if(events != nullptr)
        {
            children["events"] = events;
        }
        else
        {
            events = std::make_shared<MplsTe::GlobalAttributes::PceAttributes::Logging::Events>();
            events->parent = this;
            children["events"] = events;
        }
        return children.at("events");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::Logging::get_children()
{
    if(children.find("events") == children.end())
    {
        if(events != nullptr)
        {
            children["events"] = events;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::Events()
    :
    peer_status{YType::empty, "peer-status"}
{
    yang_name = "events"; yang_parent_name = "logging";
}

MplsTe::GlobalAttributes::PceAttributes::Logging::Events::~Events()
{
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_data() const
{
    return peer_status.is_set;
}

bool MplsTe::GlobalAttributes::PceAttributes::Logging::Events::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_status.operation);
}

std::string MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/pce-attributes/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_status.is_set || is_set(peer_status.operation)) leaf_name_data.push_back(peer_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PceAttributes::Logging::Events::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PceAttributes::Logging::Events::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-status")
    {
        peer_status = value;
    }
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOutOfResource()
    :
    lsp_oor_red_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>())
	,lsp_oor_yellow_state(std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>())
{
    lsp_oor_red_state->parent = this;
    children["lsp-oor-red-state"] = lsp_oor_red_state;

    lsp_oor_yellow_state->parent = this;
    children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;

    yang_name = "lsp-out-of-resource"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::LspOutOfResource::~LspOutOfResource()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_data() const
{
    return (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_data())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_data());
}

bool MplsTe::GlobalAttributes::LspOutOfResource::has_operation() const
{
    return is_set(operation)
	|| (lsp_oor_red_state !=  nullptr && lsp_oor_red_state->has_operation())
	|| (lsp_oor_yellow_state !=  nullptr && lsp_oor_yellow_state->has_operation());
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resource";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::LspOutOfResource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-oor-red-state")
    {
        if(lsp_oor_red_state != nullptr)
        {
            children["lsp-oor-red-state"] = lsp_oor_red_state;
        }
        else
        {
            lsp_oor_red_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState>();
            lsp_oor_red_state->parent = this;
            children["lsp-oor-red-state"] = lsp_oor_red_state;
        }
        return children.at("lsp-oor-red-state");
    }

    if(child_yang_name == "lsp-oor-yellow-state")
    {
        if(lsp_oor_yellow_state != nullptr)
        {
            children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;
        }
        else
        {
            lsp_oor_yellow_state = std::make_shared<MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState>();
            lsp_oor_yellow_state->parent = this;
            children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;
        }
        return children.at("lsp-oor-yellow-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::LspOutOfResource::get_children()
{
    if(children.find("lsp-oor-red-state") == children.end())
    {
        if(lsp_oor_red_state != nullptr)
        {
            children["lsp-oor-red-state"] = lsp_oor_red_state;
        }
    }

    if(children.find("lsp-oor-yellow-state") == children.end())
    {
        if(lsp_oor_yellow_state != nullptr)
        {
            children["lsp-oor-yellow-state"] = lsp_oor_yellow_state;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::LspOorRedState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{
    yang_name = "lsp-oor-red-state"; yang_parent_name = "lsp-out-of-resource";
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::~LspOorRedState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::has_operation() const
{
    return is_set(operation)
	|| is_set(all_transit_lsp_threshold.operation)
	|| is_set(unprotected_transit_lsp_threshold.operation);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-red-state";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.operation)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.operation)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorRedState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
    }
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::LspOorYellowState()
    :
    all_transit_lsp_threshold{YType::int32, "all-transit-lsp-threshold"},
    unprotected_transit_lsp_threshold{YType::int32, "unprotected-transit-lsp-threshold"}
{
    yang_name = "lsp-oor-yellow-state"; yang_parent_name = "lsp-out-of-resource";
}

MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::~LspOorYellowState()
{
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_data() const
{
    return all_transit_lsp_threshold.is_set
	|| unprotected_transit_lsp_threshold.is_set;
}

bool MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::has_operation() const
{
    return is_set(operation)
	|| is_set(all_transit_lsp_threshold.operation)
	|| is_set(unprotected_transit_lsp_threshold.operation);
}

std::string MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-yellow-state";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/lsp-out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_transit_lsp_threshold.is_set || is_set(all_transit_lsp_threshold.operation)) leaf_name_data.push_back(all_transit_lsp_threshold.get_name_leafdata());
    if (unprotected_transit_lsp_threshold.is_set || is_set(unprotected_transit_lsp_threshold.operation)) leaf_name_data.push_back(unprotected_transit_lsp_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::LspOutOfResource::LspOorYellowState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-transit-lsp-threshold")
    {
        all_transit_lsp_threshold = value;
    }
    if(value_path == "unprotected-transit-lsp-threshold")
    {
        unprotected_transit_lsp_threshold = value;
    }
}

MplsTe::GlobalAttributes::SoftPreemption::SoftPreemption()
    :
    enable{YType::boolean, "enable"},
    frr_rewrite{YType::empty, "frr-rewrite"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "soft-preemption"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_data() const
{
    return enable.is_set
	|| frr_rewrite.is_set
	|| timeout.is_set;
}

bool MplsTe::GlobalAttributes::SoftPreemption::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(frr_rewrite.operation)
	|| is_set(timeout.operation);
}

std::string MplsTe::GlobalAttributes::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (frr_rewrite.is_set || is_set(frr_rewrite.operation)) leaf_name_data.push_back(frr_rewrite.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::SoftPreemption::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "frr-rewrite")
    {
        frr_rewrite = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

MplsTe::GlobalAttributes::FastReroute::FastReroute()
    :
    timers(std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>())
{
    timers->parent = this;
    children["timers"] = timers;

    yang_name = "fast-reroute"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::FastReroute::~FastReroute()
{
}

bool MplsTe::GlobalAttributes::FastReroute::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool MplsTe::GlobalAttributes::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string MplsTe::GlobalAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<MplsTe::GlobalAttributes::FastReroute::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::FastReroute::get_children()
{
    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::FastReroute::Timers::Timers()
    :
    hold_backup{YType::uint32, "hold-backup"},
    promotion{YType::uint32, "promotion"}
{
    yang_name = "timers"; yang_parent_name = "fast-reroute";
}

MplsTe::GlobalAttributes::FastReroute::Timers::~Timers()
{
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_data() const
{
    return hold_backup.is_set
	|| promotion.is_set;
}

bool MplsTe::GlobalAttributes::FastReroute::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_backup.operation)
	|| is_set(promotion.operation);
}

std::string MplsTe::GlobalAttributes::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::FastReroute::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_backup.is_set || is_set(hold_backup.operation)) leaf_name_data.push_back(hold_backup.get_name_leafdata());
    if (promotion.is_set || is_set(promotion.operation)) leaf_name_data.push_back(promotion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::FastReroute::Timers::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::FastReroute::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-backup")
    {
        hold_backup = value;
    }
    if(value_path == "promotion")
    {
        promotion = value;
    }
}

MplsTe::GlobalAttributes::PathSelection::PathSelection()
    :
    cost_limit{YType::uint32, "cost-limit"},
    loose_domain_match{YType::boolean, "loose-domain-match"},
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    ignore_overload_role(std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>())
	,invalidation(std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>())
	,loose_affinities(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>())
	,loose_metrics(std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>())
{
    ignore_overload_role->parent = this;
    children["ignore-overload-role"] = ignore_overload_role;

    invalidation->parent = this;
    children["invalidation"] = invalidation;

    loose_affinities->parent = this;
    children["loose-affinities"] = loose_affinities;

    loose_metrics->parent = this;
    children["loose-metrics"] = loose_metrics;

    yang_name = "path-selection"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::PathSelection::~PathSelection()
{
}

bool MplsTe::GlobalAttributes::PathSelection::has_data() const
{
    return cost_limit.is_set
	|| loose_domain_match.is_set
	|| metric.is_set
	|| tiebreaker.is_set
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_data())
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (loose_affinities !=  nullptr && loose_affinities->has_data())
	|| (loose_metrics !=  nullptr && loose_metrics->has_data());
}

bool MplsTe::GlobalAttributes::PathSelection::has_operation() const
{
    return is_set(operation)
	|| is_set(cost_limit.operation)
	|| is_set(loose_domain_match.operation)
	|| is_set(metric.operation)
	|| is_set(tiebreaker.operation)
	|| (ignore_overload_role !=  nullptr && ignore_overload_role->has_operation())
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (loose_affinities !=  nullptr && loose_affinities->has_operation())
	|| (loose_metrics !=  nullptr && loose_metrics->has_operation());
}

std::string MplsTe::GlobalAttributes::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (loose_domain_match.is_set || is_set(loose_domain_match.operation)) leaf_name_data.push_back(loose_domain_match.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ignore-overload-role")
    {
        if(ignore_overload_role != nullptr)
        {
            children["ignore-overload-role"] = ignore_overload_role;
        }
        else
        {
            ignore_overload_role = std::make_shared<MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole>();
            ignore_overload_role->parent = this;
            children["ignore-overload-role"] = ignore_overload_role;
        }
        return children.at("ignore-overload-role");
    }

    if(child_yang_name == "invalidation")
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
        else
        {
            invalidation = std::make_shared<MplsTe::GlobalAttributes::PathSelection::Invalidation>();
            invalidation->parent = this;
            children["invalidation"] = invalidation;
        }
        return children.at("invalidation");
    }

    if(child_yang_name == "loose-affinities")
    {
        if(loose_affinities != nullptr)
        {
            children["loose-affinities"] = loose_affinities;
        }
        else
        {
            loose_affinities = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities>();
            loose_affinities->parent = this;
            children["loose-affinities"] = loose_affinities;
        }
        return children.at("loose-affinities");
    }

    if(child_yang_name == "loose-metrics")
    {
        if(loose_metrics != nullptr)
        {
            children["loose-metrics"] = loose_metrics;
        }
        else
        {
            loose_metrics = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics>();
            loose_metrics->parent = this;
            children["loose-metrics"] = loose_metrics;
        }
        return children.at("loose-metrics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::get_children()
{
    if(children.find("ignore-overload-role") == children.end())
    {
        if(ignore_overload_role != nullptr)
        {
            children["ignore-overload-role"] = ignore_overload_role;
        }
    }

    if(children.find("invalidation") == children.end())
    {
        if(invalidation != nullptr)
        {
            children["invalidation"] = invalidation;
        }
    }

    if(children.find("loose-affinities") == children.end())
    {
        if(loose_affinities != nullptr)
        {
            children["loose-affinities"] = loose_affinities;
        }
    }

    if(children.find("loose-metrics") == children.end())
    {
        if(loose_metrics != nullptr)
        {
            children["loose-metrics"] = loose_metrics;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "loose-domain-match")
    {
        loose_domain_match = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetrics()
{
    yang_name = "loose-metrics"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::~LooseMetrics()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_data() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::has_operation() const
{
    for (std::size_t index=0; index<loose_metric.size(); index++)
    {
        if(loose_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metrics";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "loose-metric")
    {
        for(auto const & c : loose_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric>();
        c->parent = this;
        loose_metric.push_back(std::move(c));
        children[segment_path] = loose_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::LooseMetrics::get_children()
{
    for (auto const & c : loose_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::LooseMetric()
    :
    class_type{YType::uint32, "class-type"},
    metric_type{YType::enumeration, "metric-type"}
{
    yang_name = "loose-metric"; yang_parent_name = "loose-metrics";
}

MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::~LooseMetric()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_data() const
{
    return class_type.is_set
	|| metric_type.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(class_type.operation)
	|| is_set(metric_type.operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-metric" <<"[class-type='" <<class_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-metrics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::Invalidation()
    :
    path_invalidation_action{YType::enumeration, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::PathSelection::Invalidation::~Invalidation()
{
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_data() const
{
    return path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::Invalidation::has_operation() const
{
    return is_set(operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::Invalidation::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::Invalidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::IgnoreOverloadRole()
    :
    head{YType::boolean, "head"},
    mid{YType::boolean, "mid"},
    tail{YType::boolean, "tail"}
{
    yang_name = "ignore-overload-role"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::~IgnoreOverloadRole()
{
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_data() const
{
    return head.is_set
	|| mid.is_set
	|| tail.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::has_operation() const
{
    return is_set(operation)
	|| is_set(head.operation)
	|| is_set(mid.operation)
	|| is_set(tail.operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore-overload-role";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.operation)) leaf_name_data.push_back(head.get_name_leafdata());
    if (mid.is_set || is_set(mid.operation)) leaf_name_data.push_back(mid.get_name_leafdata());
    if (tail.is_set || is_set(tail.operation)) leaf_name_data.push_back(tail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head")
    {
        head = value;
    }
    if(value_path == "mid")
    {
        mid = value;
    }
    if(value_path == "tail")
    {
        tail = value;
    }
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinities()
{
    yang_name = "loose-affinities"; yang_parent_name = "path-selection";
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::~LooseAffinities()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_data() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::has_operation() const
{
    for (std::size_t index=0; index<loose_affinity.size(); index++)
    {
        if(loose_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinities";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "loose-affinity")
    {
        for(auto const & c : loose_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity>();
        c->parent = this;
        loose_affinity.push_back(std::move(c));
        children[segment_path] = loose_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::LooseAffinities::get_children()
{
    for (auto const & c : loose_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::LooseAffinity()
    :
    class_type{YType::uint32, "class-type"},
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "loose-affinity"; yang_parent_name = "loose-affinities";
}

MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::~LooseAffinity()
{
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_data() const
{
    return class_type.is_set
	|| affinity.is_set
	|| mask.is_set;
}

bool MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::has_operation() const
{
    return is_set(operation)
	|| is_set(class_type.operation)
	|| is_set(affinity.operation)
	|| is_set(mask.operation);
}

std::string MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose-affinity" <<"[class-type='" <<class_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/path-selection/loose-affinities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.operation)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "affinity")
    {
        affinity = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMappings()
{
    yang_name = "affinity-mappings"; yang_parent_name = "global-attributes";
}

MplsTe::GlobalAttributes::AffinityMappings::~AffinityMappings()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_data() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GlobalAttributes::AffinityMappings::has_operation() const
{
    for (std::size_t index=0; index<affinity_mapping.size(); index++)
    {
        if(affinity_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mappings";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AffinityMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-mapping")
    {
        for(auto const & c : affinity_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping>();
        c->parent = this;
        affinity_mapping.push_back(std::move(c));
        children[segment_path] = affinity_mapping.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AffinityMappings::get_children()
{
    for (auto const & c : affinity_mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::AffinityMapping()
    :
    affinity_name{YType::str, "affinity-name"},
    value_{YType::str, "value"},
    value_type{YType::enumeration, "value-type"}
{
    yang_name = "affinity-mapping"; yang_parent_name = "affinity-mappings";
}

MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::~AffinityMapping()
{
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_data() const
{
    return affinity_name.is_set
	|| value_.is_set
	|| value_type.is_set;
}

bool MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_name.operation)
	|| is_set(value_.operation)
	|| is_set(value_type.operation);
}

std::string MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mapping" <<"[affinity-name='" <<affinity_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/global-attributes/affinity-mappings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.operation)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_type.is_set || is_set(value_type.operation)) leaf_name_data.push_back(value_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::get_children()
{
    return children;
}

void MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "value-type")
    {
        value_type = value;
    }
}

MplsTe::TransportProfile::TransportProfile()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"}
    	,
    alarm(std::make_shared<MplsTe::TransportProfile::Alarm>())
	,bfd(std::make_shared<MplsTe::TransportProfile::Bfd>())
	,fault(std::make_shared<MplsTe::TransportProfile::Fault>())
	,midpoints(std::make_shared<MplsTe::TransportProfile::Midpoints>())
{
    alarm->parent = this;
    children["alarm"] = alarm;

    bfd->parent = this;
    children["bfd"] = bfd;

    fault->parent = this;
    children["fault"] = fault;

    midpoints->parent = this;
    children["midpoints"] = midpoints;

    yang_name = "transport-profile"; yang_parent_name = "mpls-te";
}

MplsTe::TransportProfile::~TransportProfile()
{
}

bool MplsTe::TransportProfile::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| (alarm !=  nullptr && alarm->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (midpoints !=  nullptr && midpoints->has_data());
}

bool MplsTe::TransportProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(global_id.operation)
	|| is_set(node_id.operation)
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (midpoints !=  nullptr && midpoints->has_operation());
}

std::string MplsTe::TransportProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "alarm")
    {
        if(alarm != nullptr)
        {
            children["alarm"] = alarm;
        }
        else
        {
            alarm = std::make_shared<MplsTe::TransportProfile::Alarm>();
            alarm->parent = this;
            children["alarm"] = alarm;
        }
        return children.at("alarm");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<MplsTe::TransportProfile::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "fault")
    {
        if(fault != nullptr)
        {
            children["fault"] = fault;
        }
        else
        {
            fault = std::make_shared<MplsTe::TransportProfile::Fault>();
            fault->parent = this;
            children["fault"] = fault;
        }
        return children.at("fault");
    }

    if(child_yang_name == "midpoints")
    {
        if(midpoints != nullptr)
        {
            children["midpoints"] = midpoints;
        }
        else
        {
            midpoints = std::make_shared<MplsTe::TransportProfile::Midpoints>();
            midpoints->parent = this;
            children["midpoints"] = midpoints;
        }
        return children.at("midpoints");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::get_children()
{
    if(children.find("alarm") == children.end())
    {
        if(alarm != nullptr)
        {
            children["alarm"] = alarm;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("fault") == children.end())
    {
        if(fault != nullptr)
        {
            children["fault"] = fault;
        }
    }

    if(children.find("midpoints") == children.end())
    {
        if(midpoints != nullptr)
        {
            children["midpoints"] = midpoints;
        }
    }

    return children;
}

void MplsTe::TransportProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

MplsTe::TransportProfile::Fault::Fault()
    :
    refresh_interval{YType::uint32, "refresh-interval"},
    wait_to_restore_interval{YType::uint32, "wait-to-restore-interval"}
    	,
    protection_trigger(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;
    children["protection-trigger"] = protection_trigger;

    yang_name = "fault"; yang_parent_name = "transport-profile";
}

MplsTe::TransportProfile::Fault::~Fault()
{
}

bool MplsTe::TransportProfile::Fault::has_data() const
{
    return refresh_interval.is_set
	|| wait_to_restore_interval.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool MplsTe::TransportProfile::Fault::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_interval.operation)
	|| is_set(wait_to_restore_interval.operation)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string MplsTe::TransportProfile::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Fault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_interval.is_set || is_set(refresh_interval.operation)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (wait_to_restore_interval.is_set || is_set(wait_to_restore_interval.operation)) leaf_name_data.push_back(wait_to_restore_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger != nullptr)
        {
            children["protection-trigger"] = protection_trigger;
        }
        else
        {
            protection_trigger = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger>();
            protection_trigger->parent = this;
            children["protection-trigger"] = protection_trigger;
        }
        return children.at("protection-trigger");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Fault::get_children()
{
    if(children.find("protection-trigger") == children.end())
    {
        if(protection_trigger != nullptr)
        {
            children["protection-trigger"] = protection_trigger;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Fault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
    }
    if(value_path == "wait-to-restore-interval")
    {
        wait_to_restore_interval = value;
    }
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ais{YType::empty, "ais"}
    	,
    ldi(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>())
	,lkr(std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>())
{
    ldi->parent = this;
    children["ldi"] = ldi;

    lkr->parent = this;
    children["lkr"] = lkr;

    yang_name = "protection-trigger"; yang_parent_name = "fault";
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_data() const
{
    return ais.is_set
	|| (ldi !=  nullptr && ldi->has_data())
	|| (lkr !=  nullptr && lkr->has_data());
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(operation)
	|| is_set(ais.operation)
	|| (ldi !=  nullptr && ldi->has_operation())
	|| (lkr !=  nullptr && lkr->has_operation());
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Fault::ProtectionTrigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ais.is_set || is_set(ais.operation)) leaf_name_data.push_back(ais.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldi")
    {
        if(ldi != nullptr)
        {
            children["ldi"] = ldi;
        }
        else
        {
            ldi = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi>();
            ldi->parent = this;
            children["ldi"] = ldi;
        }
        return children.at("ldi");
    }

    if(child_yang_name == "lkr")
    {
        if(lkr != nullptr)
        {
            children["lkr"] = lkr;
        }
        else
        {
            lkr = std::make_shared<MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr>();
            lkr->parent = this;
            children["lkr"] = lkr;
        }
        return children.at("lkr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Fault::ProtectionTrigger::get_children()
{
    if(children.find("ldi") == children.end())
    {
        if(ldi != nullptr)
        {
            children["ldi"] = ldi;
        }
    }

    if(children.find("lkr") == children.end())
    {
        if(lkr != nullptr)
        {
            children["lkr"] = lkr;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ais")
    {
        ais = value;
    }
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::Ldi()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "ldi"; yang_parent_name = "protection-trigger";
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::~Ldi()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldi";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::Lkr()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "lkr"; yang_parent_name = "protection-trigger";
}

MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::~Lkr()
{
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lkr";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/fault/protection-trigger/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsTe::TransportProfile::Alarm::Alarm()
    :
    enable_alarm{YType::empty, "enable-alarm"},
    soak_time{YType::uint32, "soak-time"}
    	,
    suppress_event(std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>())
{
    suppress_event->parent = this;
    children["suppress-event"] = suppress_event;

    yang_name = "alarm"; yang_parent_name = "transport-profile";
}

MplsTe::TransportProfile::Alarm::~Alarm()
{
}

bool MplsTe::TransportProfile::Alarm::has_data() const
{
    return enable_alarm.is_set
	|| soak_time.is_set
	|| (suppress_event !=  nullptr && suppress_event->has_data());
}

bool MplsTe::TransportProfile::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_alarm.operation)
	|| is_set(soak_time.operation)
	|| (suppress_event !=  nullptr && suppress_event->has_operation());
}

std::string MplsTe::TransportProfile::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_alarm.is_set || is_set(enable_alarm.operation)) leaf_name_data.push_back(enable_alarm.get_name_leafdata());
    if (soak_time.is_set || is_set(soak_time.operation)) leaf_name_data.push_back(soak_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "suppress-event")
    {
        if(suppress_event != nullptr)
        {
            children["suppress-event"] = suppress_event;
        }
        else
        {
            suppress_event = std::make_shared<MplsTe::TransportProfile::Alarm::SuppressEvent>();
            suppress_event->parent = this;
            children["suppress-event"] = suppress_event;
        }
        return children.at("suppress-event");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Alarm::get_children()
{
    if(children.find("suppress-event") == children.end())
    {
        if(suppress_event != nullptr)
        {
            children["suppress-event"] = suppress_event;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-alarm")
    {
        enable_alarm = value;
    }
    if(value_path == "soak-time")
    {
        soak_time = value;
    }
}

MplsTe::TransportProfile::Alarm::SuppressEvent::SuppressEvent()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "suppress-event"; yang_parent_name = "alarm";
}

MplsTe::TransportProfile::Alarm::SuppressEvent::~SuppressEvent()
{
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_data() const
{
    return disable.is_set;
}

bool MplsTe::TransportProfile::Alarm::SuppressEvent::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string MplsTe::TransportProfile::Alarm::SuppressEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress-event";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Alarm::SuppressEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/alarm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Alarm::SuppressEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Alarm::SuppressEvent::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Alarm::SuppressEvent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsTe::TransportProfile::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    detection_multiplier_standby{YType::uint32, "detection-multiplier-standby"}
    	,
    min_interval(std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>())
	,min_interval_standby(std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    children["min-interval"] = min_interval;

    min_interval_standby->parent = this;
    children["min-interval-standby"] = min_interval_standby;

    yang_name = "bfd"; yang_parent_name = "transport-profile";
}

MplsTe::TransportProfile::Bfd::~Bfd()
{
}

bool MplsTe::TransportProfile::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| detection_multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool MplsTe::TransportProfile::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(detection_multiplier_standby.operation)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string MplsTe::TransportProfile::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (detection_multiplier_standby.is_set || is_set(detection_multiplier_standby.operation)) leaf_name_data.push_back(detection_multiplier_standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min-interval")
    {
        if(min_interval != nullptr)
        {
            children["min-interval"] = min_interval;
        }
        else
        {
            min_interval = std::make_shared<MplsTe::TransportProfile::Bfd::MinInterval>();
            min_interval->parent = this;
            children["min-interval"] = min_interval;
        }
        return children.at("min-interval");
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby != nullptr)
        {
            children["min-interval-standby"] = min_interval_standby;
        }
        else
        {
            min_interval_standby = std::make_shared<MplsTe::TransportProfile::Bfd::MinIntervalStandby>();
            min_interval_standby->parent = this;
            children["min-interval-standby"] = min_interval_standby;
        }
        return children.at("min-interval-standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Bfd::get_children()
{
    if(children.find("min-interval") == children.end())
    {
        if(min_interval != nullptr)
        {
            children["min-interval"] = min_interval;
        }
    }

    if(children.find("min-interval-standby") == children.end())
    {
        if(min_interval_standby != nullptr)
        {
            children["min-interval-standby"] = min_interval_standby;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "detection-multiplier-standby")
    {
        detection_multiplier_standby = value;
    }
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{
    yang_name = "min-interval-standby"; yang_parent_name = "bfd";
}

MplsTe::TransportProfile::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_data() const
{
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(operation)
	|| is_set(interval_standby_ms.operation)
	|| is_set(interval_standby_us.operation);
}

std::string MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.operation)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.operation)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Bfd::MinIntervalStandby::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Bfd::MinIntervalStandby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
    }
}

MplsTe::TransportProfile::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{
    yang_name = "min-interval"; yang_parent_name = "bfd";
}

MplsTe::TransportProfile::Bfd::MinInterval::~MinInterval()
{
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_data() const
{
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool MplsTe::TransportProfile::Bfd::MinInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(interval_ms.operation)
	|| is_set(interval_us.operation);
}

std::string MplsTe::TransportProfile::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Bfd::MinInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.operation)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.operation)) leaf_name_data.push_back(interval_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Bfd::MinInterval::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Bfd::MinInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoints()
{
    yang_name = "midpoints"; yang_parent_name = "transport-profile";
}

MplsTe::TransportProfile::Midpoints::~Midpoints()
{
}

bool MplsTe::TransportProfile::Midpoints::has_data() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TransportProfile::Midpoints::has_operation() const
{
    for (std::size_t index=0; index<midpoint.size(); index++)
    {
        if(midpoint[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::TransportProfile::Midpoints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoints";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "midpoint")
    {
        for(auto const & c : midpoint)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint>();
        c->parent = this;
        midpoint.push_back(std::move(c));
        children[segment_path] = midpoint.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::get_children()
{
    for (auto const & c : midpoint)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::TransportProfile::Midpoints::Midpoint::Midpoint()
    :
    midpoint_name{YType::str, "midpoint-name"},
    lsp_id{YType::uint32, "lsp-id"},
    lsp_protect{YType::empty, "lsp-protect"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    destination(nullptr) // presence node
	,forward_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>())
	,reverse_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>())
	,source(nullptr) // presence node
{
    forward_lsp->parent = this;
    children["forward-lsp"] = forward_lsp;

    reverse_lsp->parent = this;
    children["reverse-lsp"] = reverse_lsp;

    yang_name = "midpoint"; yang_parent_name = "midpoints";
}

MplsTe::TransportProfile::Midpoints::Midpoint::~Midpoint()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_data() const
{
    return midpoint_name.is_set
	|| lsp_id.is_set
	|| lsp_protect.is_set
	|| tunnel_name.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_operation() const
{
    return is_set(operation)
	|| is_set(midpoint_name.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_protect.operation)
	|| is_set(tunnel_name.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint" <<"[midpoint-name='" <<midpoint_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/midpoints/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_name.is_set || is_set(midpoint_name.operation)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_protect.is_set || is_set(lsp_protect.operation)) leaf_name_data.push_back(lsp_protect.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
        else
        {
            destination = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Destination>();
            destination->parent = this;
            children["destination"] = destination;
        }
        return children.at("destination");
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp != nullptr)
        {
            children["forward-lsp"] = forward_lsp;
        }
        else
        {
            forward_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>();
            forward_lsp->parent = this;
            children["forward-lsp"] = forward_lsp;
        }
        return children.at("forward-lsp");
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
        else
        {
            reverse_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>();
            reverse_lsp->parent = this;
            children["reverse-lsp"] = reverse_lsp;
        }
        return children.at("reverse-lsp");
    }

    if(child_yang_name == "source")
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
        else
        {
            source = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Source>();
            source->parent = this;
            children["source"] = source;
        }
        return children.at("source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::get_children()
{
    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
    }

    if(children.find("forward-lsp") == children.end())
    {
        if(forward_lsp != nullptr)
        {
            children["forward-lsp"] = forward_lsp;
        }
    }

    if(children.find("reverse-lsp") == children.end())
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
    }

    if(children.find("source") == children.end())
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-protect")
    {
        lsp_protect = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::Source()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "source"; yang_parent_name = "midpoint";
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::~Source()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(global_id.operation)
	|| is_set(node_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::Destination()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "destination"; yang_parent_name = "midpoint";
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::~Destination()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(global_id.operation)
	|| is_set(node_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardLsp()
    :
    forward_bandwidth{YType::uint32, "forward-bandwidth"}
    	,
    forward_io_map(nullptr) // presence node
{
    yang_name = "forward-lsp"; yang_parent_name = "midpoint";
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_data() const
{
    return forward_bandwidth.is_set
	|| (forward_io_map !=  nullptr && forward_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(forward_bandwidth.operation)
	|| (forward_io_map !=  nullptr && forward_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardLsp' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_bandwidth.is_set || is_set(forward_bandwidth.operation)) leaf_name_data.push_back(forward_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forward-io-map")
    {
        if(forward_io_map != nullptr)
        {
            children["forward-io-map"] = forward_io_map;
        }
        else
        {
            forward_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap>();
            forward_io_map->parent = this;
            children["forward-io-map"] = forward_io_map;
        }
        return children.at("forward-io-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_children()
{
    if(children.find("forward-io-map") == children.end())
    {
        if(forward_io_map != nullptr)
        {
            children["forward-io-map"] = forward_io_map;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forward-bandwidth")
    {
        forward_bandwidth = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::ForwardIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{
    yang_name = "forward-io-map"; yang_parent_name = "forward-lsp";
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::~ForwardIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(out_label.operation)
	|| is_set(out_link.operation);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-io-map";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardIoMap' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.operation)) leaf_name_data.push_back(out_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-link")
    {
        out_link = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseLsp()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"}
    	,
    reverse_io_map(nullptr) // presence node
{
    yang_name = "reverse-lsp"; yang_parent_name = "midpoint";
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_data() const
{
    return reverse_bandwidth.is_set
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(reverse_bandwidth.operation)
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseLsp' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.operation)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reverse-io-map")
    {
        if(reverse_io_map != nullptr)
        {
            children["reverse-io-map"] = reverse_io_map;
        }
        else
        {
            reverse_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap>();
            reverse_io_map->parent = this;
            children["reverse-io-map"] = reverse_io_map;
        }
        return children.at("reverse-io-map");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_children()
{
    if(children.find("reverse-io-map") == children.end())
    {
        if(reverse_io_map != nullptr)
        {
            children["reverse-io-map"] = reverse_io_map;
        }
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
    }
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::ReverseIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{
    yang_name = "reverse-io-map"; yang_parent_name = "reverse-lsp";
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::~ReverseIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_operation() const
{
    return is_set(operation)
	|| is_set(in_label.operation)
	|| is_set(out_label.operation)
	|| is_set(out_link.operation);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-io-map";

    return path_buffer.str();

}

EntityPath MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReverseIoMap' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.operation)) leaf_name_data.push_back(out_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_children()
{
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-link")
    {
        out_link = value;
    }
}

MplsTe::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-te";
}

MplsTe::Interfaces::~Interfaces()
{
}

bool MplsTe::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    global_attributes(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>())
	,lcac(std::make_shared<MplsTe::Interfaces::Interface::Lcac>())
	,transport_profile_link(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>())
{
    global_attributes->parent = this;
    children["global-attributes"] = global_attributes;

    lcac->parent = this;
    children["lcac"] = lcac;

    transport_profile_link->parent = this;
    children["transport-profile-link"] = transport_profile_link;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsTe::Interfaces::Interface::~Interface()
{
}

bool MplsTe::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (global_attributes !=  nullptr && global_attributes->has_data())
	|| (lcac !=  nullptr && lcac->has_data())
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_data());
}

bool MplsTe::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (global_attributes !=  nullptr && global_attributes->has_operation())
	|| (lcac !=  nullptr && lcac->has_operation())
	|| (transport_profile_link !=  nullptr && transport_profile_link->has_operation());
}

std::string MplsTe::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-attributes")
    {
        if(global_attributes != nullptr)
        {
            children["global-attributes"] = global_attributes;
        }
        else
        {
            global_attributes = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes>();
            global_attributes->parent = this;
            children["global-attributes"] = global_attributes;
        }
        return children.at("global-attributes");
    }

    if(child_yang_name == "lcac")
    {
        if(lcac != nullptr)
        {
            children["lcac"] = lcac;
        }
        else
        {
            lcac = std::make_shared<MplsTe::Interfaces::Interface::Lcac>();
            lcac->parent = this;
            children["lcac"] = lcac;
        }
        return children.at("lcac");
    }

    if(child_yang_name == "transport-profile-link")
    {
        if(transport_profile_link != nullptr)
        {
            children["transport-profile-link"] = transport_profile_link;
        }
        else
        {
            transport_profile_link = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink>();
            transport_profile_link->parent = this;
            children["transport-profile-link"] = transport_profile_link;
        }
        return children.at("transport-profile-link");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::get_children()
{
    if(children.find("global-attributes") == children.end())
    {
        if(global_attributes != nullptr)
        {
            children["global-attributes"] = global_attributes;
        }
    }

    if(children.find("lcac") == children.end())
    {
        if(lcac != nullptr)
        {
            children["lcac"] = lcac;
        }
    }

    if(children.find("transport-profile-link") == children.end())
    {
        if(transport_profile_link != nullptr)
        {
            children["transport-profile-link"] = transport_profile_link;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsTe::Interfaces::Interface::TransportProfileLink::TransportProfileLink()
    :
    links(std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>())
{
    links->parent = this;
    children["links"] = links;

    yang_name = "transport-profile-link"; yang_parent_name = "interface";
}

MplsTe::Interfaces::Interface::TransportProfileLink::~TransportProfileLink()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::has_operation() const
{
    return is_set(operation)
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-profile-link";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::TransportProfileLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TransportProfileLink' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "links")
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
        else
        {
            links = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links>();
            links->parent = this;
            children["links"] = links;
        }
        return children.at("links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::TransportProfileLink::get_children()
{
    if(children.find("links") == children.end())
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Links()
{
    yang_name = "links"; yang_parent_name = "transport-profile-link";
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::~Links()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Links' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::TransportProfileLink::Links::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::Link()
    :
    link_id{YType::uint32, "link-id"},
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_type{YType::enumeration, "next-hop-type"}
{
    yang_name = "link"; yang_parent_name = "links";
}

MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::~Link()
{
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_data() const
{
    return link_id.is_set
	|| next_hop_address.is_set
	|| next_hop_type.is_set;
}

bool MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::has_operation() const
{
    return is_set(operation)
	|| is_set(link_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(next_hop_type.operation);
}

std::string MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[link-id='" <<link_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Link' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.operation)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
    }
}

MplsTe::Interfaces::Interface::Lcac::Lcac()
    :
    admin_weight{YType::int32, "admin-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    bfd{YType::empty, "bfd"},
    enable{YType::empty, "enable"},
    fault_oam_lockout{YType::empty, "fault-oam-lockout"}
    	,
    attribute_name_xr(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>())
	,attribute_names(std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>())
	,down_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>())
	,flood_area(std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>())
	,srlgs(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>())
	,switchings(std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>())
	,up_thresholds(std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>())
{
    attribute_name_xr->parent = this;
    children["attribute-name-xr"] = attribute_name_xr;

    attribute_names->parent = this;
    children["attribute-names"] = attribute_names;

    down_thresholds->parent = this;
    children["down-thresholds"] = down_thresholds;

    flood_area->parent = this;
    children["flood-area"] = flood_area;

    srlgs->parent = this;
    children["srlgs"] = srlgs;

    switchings->parent = this;
    children["switchings"] = switchings;

    up_thresholds->parent = this;
    children["up-thresholds"] = up_thresholds;

    yang_name = "lcac"; yang_parent_name = "interface";
}

MplsTe::Interfaces::Interface::Lcac::~Lcac()
{
}

bool MplsTe::Interfaces::Interface::Lcac::has_data() const
{
    return admin_weight.is_set
	|| attribute_flags.is_set
	|| bfd.is_set
	|| enable.is_set
	|| fault_oam_lockout.is_set
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_data())
	|| (attribute_names !=  nullptr && attribute_names->has_data())
	|| (down_thresholds !=  nullptr && down_thresholds->has_data())
	|| (flood_area !=  nullptr && flood_area->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data())
	|| (switchings !=  nullptr && switchings->has_data())
	|| (up_thresholds !=  nullptr && up_thresholds->has_data());
}

bool MplsTe::Interfaces::Interface::Lcac::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_weight.operation)
	|| is_set(attribute_flags.operation)
	|| is_set(bfd.operation)
	|| is_set(enable.operation)
	|| is_set(fault_oam_lockout.operation)
	|| (attribute_name_xr !=  nullptr && attribute_name_xr->has_operation())
	|| (attribute_names !=  nullptr && attribute_names->has_operation())
	|| (down_thresholds !=  nullptr && down_thresholds->has_operation())
	|| (flood_area !=  nullptr && flood_area->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (switchings !=  nullptr && switchings->has_operation())
	|| (up_thresholds !=  nullptr && up_thresholds->has_operation());
}

std::string MplsTe::Interfaces::Interface::Lcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcac";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lcac' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.operation)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (fault_oam_lockout.is_set || is_set(fault_oam_lockout.operation)) leaf_name_data.push_back(fault_oam_lockout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-name-xr")
    {
        if(attribute_name_xr != nullptr)
        {
            children["attribute-name-xr"] = attribute_name_xr;
        }
        else
        {
            attribute_name_xr = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNameXr>();
            attribute_name_xr->parent = this;
            children["attribute-name-xr"] = attribute_name_xr;
        }
        return children.at("attribute-name-xr");
    }

    if(child_yang_name == "attribute-names")
    {
        if(attribute_names != nullptr)
        {
            children["attribute-names"] = attribute_names;
        }
        else
        {
            attribute_names = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames>();
            attribute_names->parent = this;
            children["attribute-names"] = attribute_names;
        }
        return children.at("attribute-names");
    }

    if(child_yang_name == "down-thresholds")
    {
        if(down_thresholds != nullptr)
        {
            children["down-thresholds"] = down_thresholds;
        }
        else
        {
            down_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::DownThresholds>();
            down_thresholds->parent = this;
            children["down-thresholds"] = down_thresholds;
        }
        return children.at("down-thresholds");
    }

    if(child_yang_name == "flood-area")
    {
        if(flood_area != nullptr)
        {
            children["flood-area"] = flood_area;
        }
        else
        {
            flood_area = std::make_shared<MplsTe::Interfaces::Interface::Lcac::FloodArea>();
            flood_area->parent = this;
            children["flood-area"] = flood_area;
        }
        return children.at("flood-area");
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
        else
        {
            srlgs = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs>();
            srlgs->parent = this;
            children["srlgs"] = srlgs;
        }
        return children.at("srlgs");
    }

    if(child_yang_name == "switchings")
    {
        if(switchings != nullptr)
        {
            children["switchings"] = switchings;
        }
        else
        {
            switchings = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings>();
            switchings->parent = this;
            children["switchings"] = switchings;
        }
        return children.at("switchings");
    }

    if(child_yang_name == "up-thresholds")
    {
        if(up_thresholds != nullptr)
        {
            children["up-thresholds"] = up_thresholds;
        }
        else
        {
            up_thresholds = std::make_shared<MplsTe::Interfaces::Interface::Lcac::UpThresholds>();
            up_thresholds->parent = this;
            children["up-thresholds"] = up_thresholds;
        }
        return children.at("up-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::get_children()
{
    if(children.find("attribute-name-xr") == children.end())
    {
        if(attribute_name_xr != nullptr)
        {
            children["attribute-name-xr"] = attribute_name_xr;
        }
    }

    if(children.find("attribute-names") == children.end())
    {
        if(attribute_names != nullptr)
        {
            children["attribute-names"] = attribute_names;
        }
    }

    if(children.find("down-thresholds") == children.end())
    {
        if(down_thresholds != nullptr)
        {
            children["down-thresholds"] = down_thresholds;
        }
    }

    if(children.find("flood-area") == children.end())
    {
        if(flood_area != nullptr)
        {
            children["flood-area"] = flood_area;
        }
    }

    if(children.find("srlgs") == children.end())
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
    }

    if(children.find("switchings") == children.end())
    {
        if(switchings != nullptr)
        {
            children["switchings"] = switchings;
        }
    }

    if(children.find("up-thresholds") == children.end())
    {
        if(up_thresholds != nullptr)
        {
            children["up-thresholds"] = up_thresholds;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
    }
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "fault-oam-lockout")
    {
        fault_oam_lockout = value;
    }
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switchings()
{
    yang_name = "switchings"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::Switchings::~Switchings()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_data() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::has_operation() const
{
    for (std::size_t index=0; index<switching.size(); index++)
    {
        if(switching[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchings";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::Switchings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switchings' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "switching")
    {
        for(auto const & c : switching)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Switchings::Switching>();
        c->parent = this;
        switching.push_back(std::move(c));
        children[segment_path] = switching.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::Switchings::get_children()
{
    for (auto const & c : switching)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::Switching()
    :
    switching_id{YType::str, "switching-id"},
    capability{YType::enumeration, "capability"},
    encoding{YType::enumeration, "encoding"}
{
    yang_name = "switching"; yang_parent_name = "switchings";
}

MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::~Switching()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_data() const
{
    return switching_id.is_set
	|| capability.is_set
	|| encoding.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::has_operation() const
{
    return is_set(operation)
	|| is_set(switching_id.operation)
	|| is_set(capability.operation)
	|| is_set(encoding.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switching" <<"[switching-id='" <<switching_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Switching' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switching_id.is_set || is_set(switching_id.operation)) leaf_name_data.push_back(switching_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Switchings::Switching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switching-id")
    {
        switching_id = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "encoding")
    {
        encoding = value;
    }
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::FloodArea()
    :
    area_id{YType::int32, "area-id"},
    igp_type{YType::enumeration, "igp-type"},
    process_name{YType::str, "process-name"}
{
    yang_name = "flood-area"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::FloodArea::~FloodArea()
{
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_data() const
{
    return area_id.is_set
	|| igp_type.is_set
	|| process_name.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::FloodArea::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(igp_type.operation)
	|| is_set(process_name.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::FloodArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-area";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::FloodArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodArea' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::FloodArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::FloodArea::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::FloodArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::AttributeNameXr()
    :
    attribute_name{YType::str, "attribute-name"}
{
    yang_name = "attribute-name-xr"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::~AttributeNameXr()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_data() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::has_operation() const
{
    for (auto const & leaf : attribute_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(attribute_name.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name-xr";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeNameXr' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto attribute_name_name_datas = attribute_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attribute_name_name_datas.begin(), attribute_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNameXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-name")
    {
        attribute_name.append(value);
    }
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeNames()
{
    yang_name = "attribute-names"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::~AttributeNames()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_data() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::has_operation() const
{
    for (std::size_t index=0; index<attribute_name.size(); index++)
    {
        if(attribute_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-names";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeNames' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-name")
    {
        for(auto const & c : attribute_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName>();
        c->parent = this;
        attribute_name.push_back(std::move(c));
        children[segment_path] = attribute_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::AttributeNames::get_children()
{
    for (auto const & c : attribute_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::AttributeName()
    :
    affinity_index{YType::uint32, "affinity-index"},
    value_{YType::str, "value"}
{
    yang_name = "attribute-name"; yang_parent_name = "attribute-names";
}

MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::~AttributeName()
{
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_index.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_index.operation)
	|| is_set(value_.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-name" <<"[affinity-index='" <<affinity_index <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeName' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_index.is_set || is_set(affinity_index.operation)) leaf_name_data.push_back(affinity_index.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-index")
    {
        affinity_index = value;
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlgs()
{
    yang_name = "srlgs"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::~Srlgs()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::Srlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srlgs' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(std::move(c));
        children[segment_path] = srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::Srlgs::get_children()
{
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::uint32, "srlg-number"}
{
    yang_name = "srlg"; yang_parent_name = "srlgs";
}

MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_data() const
{
    return srlg_number.is_set;
}

bool MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_number.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srlg' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::UpThresholds()
    :
    up_threshold{YType::uint32, "up-threshold"}
{
    yang_name = "up-thresholds"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::UpThresholds::~UpThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_data() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::UpThresholds::has_operation() const
{
    for (auto const & leaf : up_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(up_threshold.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-thresholds";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpThresholds' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto up_threshold_name_datas = up_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_threshold_name_datas.begin(), up_threshold_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::UpThresholds::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::UpThresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "up-threshold")
    {
        up_threshold.append(value);
    }
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::DownThresholds()
    :
    down_threshold{YType::uint32, "down-threshold"}
{
    yang_name = "down-thresholds"; yang_parent_name = "lcac";
}

MplsTe::Interfaces::Interface::Lcac::DownThresholds::~DownThresholds()
{
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_data() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::Lcac::DownThresholds::has_operation() const
{
    for (auto const & leaf : down_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(down_threshold.operation);
}

std::string MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-thresholds";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownThresholds' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_threshold_name_datas = down_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_threshold_name_datas.begin(), down_threshold_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::Lcac::DownThresholds::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::Lcac::DownThresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-threshold")
    {
        down_threshold.append(value);
    }
}

MplsTe::Interfaces::Interface::GlobalAttributes::GlobalAttributes()
    :
    auto_tunnel(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>())
	,backup_paths(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>())
	,backup_tunnels(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>())
{
    auto_tunnel->parent = this;
    children["auto-tunnel"] = auto_tunnel;

    backup_paths->parent = this;
    children["backup-paths"] = backup_paths;

    backup_tunnels->parent = this;
    children["backup-tunnels"] = backup_tunnels;

    yang_name = "global-attributes"; yang_parent_name = "interface";
}

MplsTe::Interfaces::Interface::GlobalAttributes::~GlobalAttributes()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_data() const
{
    return (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (backup_paths !=  nullptr && backup_paths->has_data())
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::has_operation() const
{
    return is_set(operation)
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (backup_paths !=  nullptr && backup_paths->has_operation())
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-attributes";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAttributes' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
        else
        {
            auto_tunnel = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel>();
            auto_tunnel->parent = this;
            children["auto-tunnel"] = auto_tunnel;
        }
        return children.at("auto-tunnel");
    }

    if(child_yang_name == "backup-paths")
    {
        if(backup_paths != nullptr)
        {
            children["backup-paths"] = backup_paths;
        }
        else
        {
            backup_paths = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths>();
            backup_paths->parent = this;
            children["backup-paths"] = backup_paths;
        }
        return children.at("backup-paths");
    }

    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels != nullptr)
        {
            children["backup-tunnels"] = backup_tunnels;
        }
        else
        {
            backup_tunnels = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels>();
            backup_tunnels->parent = this;
            children["backup-tunnels"] = backup_tunnels;
        }
        return children.at("backup-tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::get_children()
{
    if(children.find("auto-tunnel") == children.end())
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
    }

    if(children.find("backup-paths") == children.end())
    {
        if(backup_paths != nullptr)
        {
            children["backup-paths"] = backup_paths;
        }
    }

    if(children.find("backup-tunnels") == children.end())
    {
        if(backup_tunnels != nullptr)
        {
            children["backup-tunnels"] = backup_tunnels;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnels()
{
    yang_name = "backup-tunnels"; yang_parent_name = "global-attributes";
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::~BackupTunnels()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_data() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnels' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel")
    {
        for(auto const & c : backup_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.push_back(std::move(c));
        children[segment_path] = backup_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::get_children()
{
    for (auto const & c : backup_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels";
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_data() const
{
    return tunnel_name.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnel' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>())
{
    backup->parent = this;
    children["backup"] = backup;

    yang_name = "auto-tunnel"; yang_parent_name = "global-attributes";
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoTunnel' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
        else
        {
            backup = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup>();
            backup->parent = this;
            children["backup"] = backup;
        }
        return children.at("backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::get_children()
{
    if(children.find("backup") == children.end())
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Backup()
    :
    attribute_set{YType::str, "attribute-set"},
    enable{YType::empty, "enable"},
    next_hop_only{YType::empty, "next-hop-only"}
    	,
    exclude(std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>())
{
    exclude->parent = this;
    children["exclude"] = exclude;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_data() const
{
    return attribute_set.is_set
	|| enable.is_set
	|| next_hop_only.is_set
	|| (exclude !=  nullptr && exclude->has_data());
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_set.operation)
	|| is_set(enable.operation)
	|| is_set(next_hop_only.operation)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set.is_set || is_set(attribute_set.operation)) leaf_name_data.push_back(attribute_set.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (next_hop_only.is_set || is_set(next_hop_only.operation)) leaf_name_data.push_back(next_hop_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude")
    {
        if(exclude != nullptr)
        {
            children["exclude"] = exclude;
        }
        else
        {
            exclude = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude>();
            exclude->parent = this;
            children["exclude"] = exclude;
        }
        return children.at("exclude");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::get_children()
{
    if(children.find("exclude") == children.end())
    {
        if(exclude != nullptr)
        {
            children["exclude"] = exclude;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set")
    {
        attribute_set = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "next-hop-only")
    {
        next_hop_only = value;
    }
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::Exclude()
    :
    srlg_mode{YType::enumeration, "srlg-mode"}
{
    yang_name = "exclude"; yang_parent_name = "backup";
}

MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::~Exclude()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_data() const
{
    return srlg_mode.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::has_operation() const
{
    return is_set(operation)
	|| is_set(srlg_mode.operation);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exclude' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_mode.is_set || is_set(srlg_mode.operation)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
    }
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPaths()
{
    yang_name = "backup-paths"; yang_parent_name = "global-attributes";
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::~BackupPaths()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_data() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::has_operation() const
{
    for (std::size_t index=0; index<backup_path.size(); index++)
    {
        if(backup_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-paths";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPaths' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-path")
    {
        for(auto const & c : backup_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath>();
        c->parent = this;
        backup_path.push_back(std::move(c));
        children[segment_path] = backup_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::get_children()
{
    for (auto const & c : backup_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::BackupPath()
    :
    tunnel_number{YType::uint32, "tunnel-number"}
{
    yang_name = "backup-path"; yang_parent_name = "backup-paths";
}

MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::~BackupPath()
{
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_data() const
{
    return tunnel_number.is_set;
}

bool MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_number.operation);
}

std::string MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path" <<"[tunnel-number='" <<tunnel_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPath' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.operation)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::get_children()
{
    return children;
}

void MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
    }
}

MplsTe::GmplsNni::GmplsNni()
    :
    enable_gmpls_nni{YType::empty, "enable-gmpls-nni"},
    path_selection_metric{YType::enumeration, "path-selection-metric"}
    	,
    topology_instances(std::make_shared<MplsTe::GmplsNni::TopologyInstances>())
	,tunnel_heads(std::make_shared<MplsTe::GmplsNni::TunnelHeads>())
{
    topology_instances->parent = this;
    children["topology-instances"] = topology_instances;

    tunnel_heads->parent = this;
    children["tunnel-heads"] = tunnel_heads;

    yang_name = "gmpls-nni"; yang_parent_name = "mpls-te";
}

MplsTe::GmplsNni::~GmplsNni()
{
}

bool MplsTe::GmplsNni::has_data() const
{
    return enable_gmpls_nni.is_set
	|| path_selection_metric.is_set
	|| (topology_instances !=  nullptr && topology_instances->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data());
}

bool MplsTe::GmplsNni::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_gmpls_nni.operation)
	|| is_set(path_selection_metric.operation)
	|| (topology_instances !=  nullptr && topology_instances->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation());
}

std::string MplsTe::GmplsNni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-nni";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_gmpls_nni.is_set || is_set(enable_gmpls_nni.operation)) leaf_name_data.push_back(enable_gmpls_nni.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-instances")
    {
        if(topology_instances != nullptr)
        {
            children["topology-instances"] = topology_instances;
        }
        else
        {
            topology_instances = std::make_shared<MplsTe::GmplsNni::TopologyInstances>();
            topology_instances->parent = this;
            children["topology-instances"] = topology_instances;
        }
        return children.at("topology-instances");
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
        else
        {
            tunnel_heads = std::make_shared<MplsTe::GmplsNni::TunnelHeads>();
            tunnel_heads->parent = this;
            children["tunnel-heads"] = tunnel_heads;
        }
        return children.at("tunnel-heads");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::get_children()
{
    if(children.find("topology-instances") == children.end())
    {
        if(topology_instances != nullptr)
        {
            children["topology-instances"] = topology_instances;
        }
    }

    if(children.find("tunnel-heads") == children.end())
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
    }

    return children;
}

void MplsTe::GmplsNni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-gmpls-nni")
    {
        enable_gmpls_nni = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstances()
{
    yang_name = "topology-instances"; yang_parent_name = "gmpls-nni";
}

MplsTe::GmplsNni::TopologyInstances::~TopologyInstances()
{
}

bool MplsTe::GmplsNni::TopologyInstances::has_data() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::has_operation() const
{
    for (std::size_t index=0; index<topology_instance.size(); index++)
    {
        if(topology_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instances";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-instance")
    {
        for(auto const & c : topology_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance>();
        c->parent = this;
        topology_instance.push_back(std::move(c));
        children[segment_path] = topology_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::get_children()
{
    for (auto const & c : topology_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::TopologyInstance()
    :
    igp_instance_name{YType::str, "igp-instance-name"},
    igp_type{YType::enumeration, "igp-type"},
    ospf_area_type{YType::enumeration, "ospf-area-type"}
{
    yang_name = "topology-instance"; yang_parent_name = "topology-instances";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::~TopologyInstance()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_data() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_data())
            return true;
    }
    return igp_instance_name.is_set
	|| igp_type.is_set
	|| ospf_area_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::has_operation() const
{
    for (std::size_t index=0; index<ospf_int.size(); index++)
    {
        if(ospf_int[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfip_addr.size(); index++)
    {
        if(ospfip_addr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_instance_name.operation)
	|| is_set(igp_type.operation)
	|| is_set(ospf_area_type.operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-instance" <<"[igp-instance-name='" <<igp_instance_name <<"']" <<"[igp-type='" <<igp_type <<"']" <<"[ospf-area-type='" <<ospf_area_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/topology-instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_instance_name.is_set || is_set(igp_instance_name.operation)) leaf_name_data.push_back(igp_instance_name.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (ospf_area_type.is_set || is_set(ospf_area_type.operation)) leaf_name_data.push_back(ospf_area_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf-int")
    {
        for(auto const & c : ospf_int)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt>();
        c->parent = this;
        ospf_int.push_back(std::move(c));
        children[segment_path] = ospf_int.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ospfip-addr")
    {
        for(auto const & c : ospfip_addr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr>();
        c->parent = this;
        ospfip_addr.push_back(std::move(c));
        children[segment_path] = ospfip_addr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::get_children()
{
    for (auto const & c : ospf_int)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ospfip_addr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-instance-name")
    {
        igp_instance_name = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "ospf-area-type")
    {
        ospf_area_type = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::OspfInt()
    :
    igp_area{YType::int32, "igp-area"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers;

    yang_name = "ospf-int"; yang_parent_name = "topology-instance";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::~OspfInt()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_data() const
{
    return igp_area.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_area.operation)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-int" <<"[igp-area='" <<igp_area <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfInt' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
        else
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers;
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "ospf-int";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Controllers' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    delay{YType::uint32, "delay"},
    enable{YType::empty, "enable"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;
    children["tti-mode"] = tti_mode;

    yang_name = "controller"; yang_parent_name = "controllers";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| delay.is_set
	|| enable.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(admin_weight.operation)
	|| is_set(delay.operation)
	|| is_set(enable.operation)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Controller' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tti-mode")
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
        else
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode>();
            tti_mode->parent = this;
            children["tti-mode"] = tti_mode;
        }
        return children.at("tti-mode");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::get_children()
{
    if(children.find("tti-mode") == children.end())
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::TtiMode()
    :
    tcmid{YType::uint32, "tcmid"},
    tti_mode_type{YType::enumeration, "tti-mode-type"}
{
    yang_name = "tti-mode"; yang_parent_name = "controller";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_data() const
{
    return tcmid.is_set
	|| tti_mode_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(operation)
	|| is_set(tcmid.operation)
	|| is_set(tti_mode_type.operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtiMode' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcmid.is_set || is_set(tcmid.operation)) leaf_name_data.push_back(tcmid.get_name_leafdata());
    if (tti_mode_type.is_set || is_set(tti_mode_type.operation)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::get_children()
{
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcmid")
    {
        tcmid = value;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::OspfipAddr()
    :
    address{YType::str, "address"}
    	,
    controllers(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>())
{
    controllers->parent = this;
    children["controllers"] = controllers;

    yang_name = "ospfip-addr"; yang_parent_name = "topology-instance";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::~OspfipAddr()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_data() const
{
    return address.is_set
	|| (controllers !=  nullptr && controllers->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (controllers !=  nullptr && controllers->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfip-addr" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OspfipAddr' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controllers")
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
        else
        {
            controllers = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers>();
            controllers->parent = this;
            children["controllers"] = controllers;
        }
        return children.at("controllers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::get_children()
{
    if(children.find("controllers") == children.end())
    {
        if(controllers != nullptr)
        {
            children["controllers"] = controllers;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controllers()
{
    yang_name = "controllers"; yang_parent_name = "ospfip-addr";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::~Controllers()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllers";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Controllers' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller>();
        c->parent = this;
        controller.push_back(std::move(c));
        children[segment_path] = controller.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::get_children()
{
    for (auto const & c : controller)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::Controller()
    :
    controller_name{YType::str, "controller-name"},
    admin_weight{YType::uint32, "admin-weight"},
    delay{YType::uint32, "delay"},
    enable{YType::empty, "enable"}
    	,
    tti_mode(std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>())
{
    tti_mode->parent = this;
    children["tti-mode"] = tti_mode;

    yang_name = "controller"; yang_parent_name = "controllers";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::~Controller()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_data() const
{
    return controller_name.is_set
	|| admin_weight.is_set
	|| delay.is_set
	|| enable.is_set
	|| (tti_mode !=  nullptr && tti_mode->has_data());
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::has_operation() const
{
    return is_set(operation)
	|| is_set(controller_name.operation)
	|| is_set(admin_weight.operation)
	|| is_set(delay.operation)
	|| is_set(enable.operation)
	|| (tti_mode !=  nullptr && tti_mode->has_operation());
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[controller-name='" <<controller_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Controller' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.operation)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tti-mode")
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
        else
        {
            tti_mode = std::make_shared<MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode>();
            tti_mode->parent = this;
            children["tti-mode"] = tti_mode;
        }
        return children.at("tti-mode");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::get_children()
{
    if(children.find("tti-mode") == children.end())
    {
        if(tti_mode != nullptr)
        {
            children["tti-mode"] = tti_mode;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::TtiMode()
    :
    tcmid{YType::uint32, "tcmid"},
    tti_mode_type{YType::enumeration, "tti-mode-type"}
{
    yang_name = "tti-mode"; yang_parent_name = "controller";
}

MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::~TtiMode()
{
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_data() const
{
    return tcmid.is_set
	|| tti_mode_type.is_set;
}

bool MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::has_operation() const
{
    return is_set(operation)
	|| is_set(tcmid.operation)
	|| is_set(tti_mode_type.operation);
}

std::string MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tti-mode";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtiMode' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcmid.is_set || is_set(tcmid.operation)) leaf_name_data.push_back(tcmid.get_name_leafdata());
    if (tti_mode_type.is_set || is_set(tti_mode_type.operation)) leaf_name_data.push_back(tti_mode_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::get_children()
{
    return children;
}

void MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcmid")
    {
        tcmid = value;
    }
    if(value_path == "tti-mode-type")
    {
        tti_mode_type = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHeads()
{
    yang_name = "tunnel-heads"; yang_parent_name = "gmpls-nni";
}

MplsTe::GmplsNni::TunnelHeads::~TunnelHeads()
{
}

bool MplsTe::GmplsNni::TunnelHeads::has_data() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::GmplsNni::TunnelHeads::has_operation() const
{
    for (std::size_t index=0; index<tunnel_head.size(); index++)
    {
        if(tunnel_head[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-heads";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TunnelHeads::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-head")
    {
        for(auto const & c : tunnel_head)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead>();
        c->parent = this;
        tunnel_head.push_back(std::move(c));
        children[segment_path] = tunnel_head.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TunnelHeads::get_children()
{
    for (auto const & c : tunnel_head)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::TunnelHead()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    current_lsp_shutdown{YType::empty, "current-lsp-shutdown"},
    enable{YType::empty, "enable"},
    path_protection_attribute_set_profile{YType::str, "path-protection-attribute-set-profile"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    payload{YType::enumeration, "payload"},
    record_route{YType::empty, "record-route"},
    restore_lsp_shutdown{YType::empty, "restore-lsp-shutdown"},
    shutdown{YType::empty, "shutdown"},
    signalled_name{YType::str, "signalled-name"},
    standby_lsp_shutdown{YType::empty, "standby-lsp-shutdown"}
    	,
    destination(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>())
	,logging(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>())
	,path_options(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>())
	,protection_switching(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>())
	,signalled_bandwidth(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>())
	,static_uni(std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>())
{
    destination->parent = this;
    children["destination"] = destination;

    logging->parent = this;
    children["logging"] = logging;

    path_options->parent = this;
    children["path-options"] = path_options;

    protection_switching->parent = this;
    children["protection-switching"] = protection_switching;

    signalled_bandwidth->parent = this;
    children["signalled-bandwidth"] = signalled_bandwidth;

    static_uni->parent = this;
    children["static-uni"] = static_uni;

    yang_name = "tunnel-head"; yang_parent_name = "tunnel-heads";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::~TunnelHead()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_data() const
{
    return tunnel_id.is_set
	|| current_lsp_shutdown.is_set
	|| enable.is_set
	|| path_protection_attribute_set_profile.is_set
	|| path_selection_metric.is_set
	|| payload.is_set
	|| record_route.is_set
	|| restore_lsp_shutdown.is_set
	|| shutdown.is_set
	|| signalled_name.is_set
	|| standby_lsp_shutdown.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data())
	|| (protection_switching !=  nullptr && protection_switching->has_data())
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_data())
	|| (static_uni !=  nullptr && static_uni->has_data());
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| is_set(current_lsp_shutdown.operation)
	|| is_set(enable.operation)
	|| is_set(path_protection_attribute_set_profile.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(payload.operation)
	|| is_set(record_route.operation)
	|| is_set(restore_lsp_shutdown.operation)
	|| is_set(shutdown.operation)
	|| is_set(signalled_name.operation)
	|| is_set(standby_lsp_shutdown.operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation())
	|| (protection_switching !=  nullptr && protection_switching->has_operation())
	|| (signalled_bandwidth !=  nullptr && signalled_bandwidth->has_operation())
	|| (static_uni !=  nullptr && static_uni->has_operation());
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-head" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/gmpls-nni/tunnel-heads/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (current_lsp_shutdown.is_set || is_set(current_lsp_shutdown.operation)) leaf_name_data.push_back(current_lsp_shutdown.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (path_protection_attribute_set_profile.is_set || is_set(path_protection_attribute_set_profile.operation)) leaf_name_data.push_back(path_protection_attribute_set_profile.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (payload.is_set || is_set(payload.operation)) leaf_name_data.push_back(payload.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (restore_lsp_shutdown.is_set || is_set(restore_lsp_shutdown.operation)) leaf_name_data.push_back(restore_lsp_shutdown.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.operation)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (standby_lsp_shutdown.is_set || is_set(standby_lsp_shutdown.operation)) leaf_name_data.push_back(standby_lsp_shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
        else
        {
            destination = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Destination>();
            destination->parent = this;
            children["destination"] = destination;
        }
        return children.at("destination");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "path-options")
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
        else
        {
            path_options = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions>();
            path_options->parent = this;
            children["path-options"] = path_options;
        }
        return children.at("path-options");
    }

    if(child_yang_name == "protection-switching")
    {
        if(protection_switching != nullptr)
        {
            children["protection-switching"] = protection_switching;
        }
        else
        {
            protection_switching = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching>();
            protection_switching->parent = this;
            children["protection-switching"] = protection_switching;
        }
        return children.at("protection-switching");
    }

    if(child_yang_name == "signalled-bandwidth")
    {
        if(signalled_bandwidth != nullptr)
        {
            children["signalled-bandwidth"] = signalled_bandwidth;
        }
        else
        {
            signalled_bandwidth = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth>();
            signalled_bandwidth->parent = this;
            children["signalled-bandwidth"] = signalled_bandwidth;
        }
        return children.at("signalled-bandwidth");
    }

    if(child_yang_name == "static-uni")
    {
        if(static_uni != nullptr)
        {
            children["static-uni"] = static_uni;
        }
        else
        {
            static_uni = std::make_shared<MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni>();
            static_uni->parent = this;
            children["static-uni"] = static_uni;
        }
        return children.at("static-uni");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TunnelHeads::TunnelHead::get_children()
{
    if(children.find("destination") == children.end())
    {
        if(destination != nullptr)
        {
            children["destination"] = destination;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("path-options") == children.end())
    {
        if(path_options != nullptr)
        {
            children["path-options"] = path_options;
        }
    }

    if(children.find("protection-switching") == children.end())
    {
        if(protection_switching != nullptr)
        {
            children["protection-switching"] = protection_switching;
        }
    }

    if(children.find("signalled-bandwidth") == children.end())
    {
        if(signalled_bandwidth != nullptr)
        {
            children["signalled-bandwidth"] = signalled_bandwidth;
        }
    }

    if(children.find("static-uni") == children.end())
    {
        if(static_uni != nullptr)
        {
            children["static-uni"] = static_uni;
        }
    }

    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "current-lsp-shutdown")
    {
        current_lsp_shutdown = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "path-protection-attribute-set-profile")
    {
        path_protection_attribute_set_profile = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "payload")
    {
        payload = value;
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "restore-lsp-shutdown")
    {
        restore_lsp_shutdown = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
    }
    if(value_path == "standby-lsp-shutdown")
    {
        standby_lsp_shutdown = value;
    }
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::SignalledBandwidth()
    :
    bitrate{YType::int32, "bitrate"},
    od_uflex_framing_type{YType::enumeration, "od-uflex-framing-type"},
    signalled_bandwidth_type{YType::enumeration, "signalled-bandwidth-type"}
{
    yang_name = "signalled-bandwidth"; yang_parent_name = "tunnel-head";
}

MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::~SignalledBandwidth()
{
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_data() const
{
    return bitrate.is_set
	|| od_uflex_framing_type.is_set
	|| signalled_bandwidth_type.is_set;
}

bool MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bitrate.operation)
	|| is_set(od_uflex_framing_type.operation)
	|| is_set(signalled_bandwidth_type.operation);
}

std::string MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledBandwidth' in Cisco_IOS_XR_mpls_te_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bitrate.is_set || is_set(bitrate.operation)) leaf_name_data.push_back(bitrate.get_name_leafdata());
    if (od_uflex_framing_type.is_set || is_set(od_uflex_framing_type.operation)) leaf_name_data.push_back(od_uflex_framing_type.get_name_leafdata());
    if (signalled_bandwidth_type.is_set || is_set(signalled_bandwidth_type.operation)) leaf_name_data.push_back(signalled_bandwidth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::get_children()
{
    return children;
}

void MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bitrate")
    {
        bitrate = value;
    }
    if(value_path == "od-uflex-framing-type")
    {
        od_uflex_framing_type = value;
    }
    if(value_path == "signalled-bandwidth-type")
    {
        signalled_bandwidth_type = value;
    }
}


}
}

